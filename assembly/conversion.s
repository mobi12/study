.include "linux.s"

.section .data

#以下为存储位置
tmp_buffer:
.ascii "\0\0\0\0\0\0\0\0\0\0\0"

.section .text

.globl _start
_start:
movl %esp, %ebp

#存放结果处
pushl $tmp_buffer
#要转换的数字
pushl $824
call integer2string
addl $8, %esp
#为系统调用获取字符计数
pushl $tmp_buffer
call count_chars
addl $4, %esp

#用于sys_write
movl %eax, %edx

#进行系统调用
movl $SYS_WRITE, %eax
movl $STDOUT, %ebx
movl $tmp_buffer, %ecx

int $LINUX_SYSCALL

#进行带参返回
pushl $STDOUT
call write_newline

#退出
movl $SYS_EXIT, %eax
movl $0 , %ebx
int $LINUX_SYSCALL

