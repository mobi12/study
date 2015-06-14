.code32
.section .data
.section .text
.globl _start
 _start:
 movl $1, %ebx
 cmpl $1, %ebx
 jmp end_start
 
 end_start:
 movl $3, %ebx
 movl $1, %eax
 int $0x80
