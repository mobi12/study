.code32
.include "linux.s"
.include "record-def.s"

.section .data
input_file_name:
.ascii "test.txt\0"

output_file_name:
.ascii "testout.txt\0"

.section .bss
.lcomm record_buffer,RECORD_SIZE

#局部变量的栈偏移量
.equ ST_INPUT_DESCRIPTOR, -4
.equ ST_OUTPUT_DESCRIPTOR, -8

.section .text
.globl _start
_start:
#复制栈值
movl %esp, %ebp
subl $8, %esp
#打开用于读取的文件
movl $SYS_OPEN, %eax
movl $input_file_name, %ebx
movl $0 , %ecx
movl $0666, %edx
int $LINUX_SYSCALL

movl %eax, ST_INPUT_DESCRIPTOR(%ebp)

#打开用于写入的文件
movl $SYS_OPEN, %eax
movl $output_file_name, %ebx
movl $0101, %ecx

movl $0666, %edx
int $LINUX_SYSCALL
movl %eax, ST_OUTPUT_DESCRIPTOR(%ebp)
#检测%eax是否为负值
#非负继续,负数返回错误码
cmpl $0 , %eax
jl continue_processing

#发送错误信息
.section .data
no_open_file_code:
.ascii "0001: \0"
no_open_file_msg:
.ascii "Can't Open Input File\0"

.section .text
pushl $no_open_file_msg
pushl $no_open_file_code
call error_exit

continue_processing:
#程序其余部分

loop_begin:
pushl ST_INPUT_DESCRIPTOR(%ebp)
pushl $record_buffer
call read_record
addl $8, %esp
#返回读取的字节数
cmpl $RECORD_SIZE, %eax
jne loop_end
#递增年龄
incl record_buffer + RECORD_AGE

#写记录
pushl ST_OUTPUT_DESCRIPTOR(%ebp)
pushl $record_buffer
call write_record
addl $8, %esp

jmp loop_begin

loop_end:
movl $SYS_EXIT, %eax
movl $0 , %ebx
int $LINUX_SYSCALL
