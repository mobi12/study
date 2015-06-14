.code32
.section .data
	data_it:
		.long 1,3,5
.section .text
.globl _start
	_start:
	movl $2, %edi
	movl data_it(,%edi,4), %ebx
	movl $1, %eax

int $0x80
#Warning: 文件结束，非行尾；插入新行