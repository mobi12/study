.section .data
helloworld:
.ascii "hello world\n\0"
.section .text
.globl _start
_start:
pushl $helloworld
call printf	#调用c语言函数

pushl $0
call exit
