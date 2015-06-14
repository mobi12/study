.code32
.include "linux.s"

.section .data
	data_h:
		.string "hello,world\n"
		len = .-data_h
.section .text
.globl _start
	_start:
		movl $len, %edx
		movl $data_h, %ecx
		movl $STDOUT, %ebx
		movl $4, %eax
		int $0x80

		movl $0, %ebx
		movl $1, %eax
		int $0x80
