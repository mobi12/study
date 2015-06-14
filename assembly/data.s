.code32
.section .data
.section .text
.globl _start
	_start:
	movl (%esp), %ebx
	movl $1, %eax

int $0x80
