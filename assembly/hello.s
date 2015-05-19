.section .data
	data_str:
		.ascii "hello~\0"
.section .text
.globl _start
	_start:
		movl $1, %eax
		movl data_str, %ebx
int $0x80
