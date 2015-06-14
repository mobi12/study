.code32
#退出程序并返回状态值5
.section .data
.section .text
.globl _start
_start:
movl $1, %eax #把1以立即寻址方式放到寄存器eax，1代表exit
movl $5, %ebx #返回值5

int $0x80 #调用系统中断
