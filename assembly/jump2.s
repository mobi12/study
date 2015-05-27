.section .data
	data_i:
		.long 1,2,3
.section .text
.globl _start
_start:
movl $1 , %edi
movl data_i(,%edi,4), %eax
incl %edi
movl data_i(,%edi,4), %ebx
addl %eax, %ebx
movl $1, %eax
int $0x80 
