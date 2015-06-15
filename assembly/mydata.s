.section .data
data_my:
	.byte 3	#试一下其他的大小
.section .text
.globl _start
_start:
	movl $1, %eax
	movl data_my, %ebx

int $0x80
