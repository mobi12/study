#管理内存使用的程序
.section .data
current_break:
.long 0
heap_begin:
.long 0
.equ HEADER_SIZE, 8
.equ HDR_AVAIL_OFFSET, 0
.equ HDR_SIZE_OFFSET, 4
.equ UNAVAILABLE, 0
.equ AVAILABLE, 1
.equ SYS_BRK, 45
.equ LINUX_SYSCALL, 0X80

.section .text
.globl allocate_init
.type allocate_init,@function
allocate_init:
pushl %ebp
movl %esp, %ebp
movl $SYS_BRK, %eax
movl $0 , %ebx
int $LINUX_SYSCALL
incl %eax

movl %eax, current_break

movl %eax, heap_begin

movl %ebp, %esp
popl %ebp
ret
###函数结束
.globl allocate
.type allocate,@function
.equ ST_MEM_SIZE, 8
allocate:
pushl %ebp
movl %esp, %ebp

movl ST_MEM_SIZE(%ebp), %ecx

movl heap_begin, %eax
movl current_break, %ebx
alloc_loop_begin:
cmpl %ebx, %eax
je move_break
movl HDR_SIZE_OFFSET(%eax), %edx
cmpl $UNAVAILABLE, HDR_AVAIL_OFFSET(%eax)
je next_location

cmpl %edx, %ecx
jle allocate_here
next_location:
addl $HEADER_SIZE, %eax
addl %edx, %eax
jmp alloc_loop_begin

allocate_here:
movl $UNAVAILABLE, HDR_AVAIL_OFFSET(%eax)
addl $HEADER_SIZE, %eax
movl %ebp, %esp
popl %ebp
ret

move_break:

addl $HEADER_SIZE, %ebx
addl %ecx, %ebx
pushl %eax
pushl %ecx
pushl %ebx

movl $SYS_BRK, %eax
int $LINUX_SYSCALL
cmpl $0 , %eax
je error

popl %ebx
popl %ecx
popl %eax

movl $UNAVAILABLE, HDR_AVAIL_OFFSET(%eax)
#设置内存区大小
movl %ecx, HDR_SIZE_OFFSET(%eax)
addl $HEADER_SIZE, %eax

movl %ebx, current_break
movl %ebp, %esp
popl %ebp
ret

error:
movl $0 , %eax
movl %ebp, %esp
popl %ebp
ret
#函数结束

.globl deallocate
.type deallocate,@function
.equ ST_MEMORY_SEG, 4
deallocate:
movl ST_MEMORY_SEG(%esp), %eax
subl $HEADER_SIZE, %eax
movl $AVAILABLE,  HDR_AVAIL_OFFSET(%eax)
ret
