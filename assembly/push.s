#栈
.section .data
.section .text
.globl _start
_start:
pushl $5
movl (%esp), %ebx
movl $1, %eax
int $0x80
