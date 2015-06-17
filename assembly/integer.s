.equ ST_VALUE, 8
.equ ST_BUFFER, 12

.globl integer2string
.type integer2string, @function
integer2string:
pushl %ebp
movl %esp, %ebp

#当前字符计数
movl $0 , %ecx
movl ST_VALUE(%ebp), %eax
movl $10, %edi

conversion_loop:
movl $0 , %edx

divl %edi
addl $'0', %edx

pushl %edx

#递增位数计数
incl %ecx

#检查
cmpl $0, %eax
je end_conversion_loop

jmp conversion_loop

end_conversion_loop:
movl ST_BUFFER(%ebp), %edx

copy_reversing_loop:
popl %eax
movb %al, (%edx)
#递减
decl %ecx
#递增
incl %edx

#检查是否完成
cmpl $0 , %ecx
#如果完成，跳转结束处
je end_copy_reversing_loop
#否则重复循环
jmp copy_reversing_loop

end_copy_reversing_loop:
#完成复制
movb $0 , (%edx)
movl %ebp, %esp
popl %ebp
ret
