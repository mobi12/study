#按钮名
.section .data
GNOME_STOCK_BUTTON_YES:
.ascii "Button_YES\0"
GNOME_STOCK_BUTTON_NO:
.ascii "Button_NO\0"

#消息框类型
GNOME_MESSAGE_BOX_QUESTION:
.ascii "question\0"

#NULL标准定义
.equ NULL, 0

#GNOME信号定义
signal_destroy:
.ascii "destroy\0"
signal_delete_event:
.ascii "delete_event\0"
signal_clicked:
.ascii "clicked\0"

###应用具体定义

#应用程序信息
app_id:
.ascii "gnome-example\0"
app_version:
.ascii "first\0"
app_title:
.ascii "My first window\0"

#按钮与窗口文本
button_quit_text:
.ascii "I want to Quit the GNOME Example Program\0"
quit_question:
.ascii "Are you sure?\0"

.section .bss

#存储小组件变量
.equ WORD_SIZE, 4
.lcomm appPtr, WORD_SIZE
.lcomm btnQuit, WORD_SIZE

.section .text

.globl main
.type main,@function
main:
pushl %ebp
movl %esp, %ebp

#初始化库
pushl 12(%ebp)
pushl 8(%ebp)
pushl $app_version
pushl $app_id
call gnome_init
addl $16, %esp

#创建新应用窗口
pushl $app_title
pushl $app_id
call gnome_app_new
addl $8, %esp
movl %eax, appPtr
#创建新按钮
pushl $button_quit_text
call gtk_button_new_with_label
addl $4, %esp
movl %eax, btnQuit

#设定按钮显示在应用程序窗口
pushl btnQuit
pushl appPtr
call gnome_app_set_contents
addl $8, %esp

#显示按钮
pushl btnQuit
call gtk_widget_show
addl $4, %esp
#显示应用程序窗口
pushl appPtr
call gtk_widget_show
addl $4, %esp

#调用delete函数
pushl $NULL
pushl $delete_handler
pushl $signal_delete_event
pushl appPtr
call gtk_signal_connect
addl $16, %esp

#调用destroy_handler函数
pushl $NULL
pushl $destroy_handler
pushl $signal_destroy
pushl appPtr
call gtk_signal_connect
addl $16, %esp

#调用click函数
pushl $NULL
pushl $click_handler
pushl $signal_clicked
pushl btnQuit
call gtk_signal_connect
addl $16, %esp

#转交控制权到gnome
call gtk_main

#程序结束退出
movl $0, %eax
leave
ret

#当移除小组件时发生destroy事件
destroy_handler:
pushl %ebp
movl %esp, %ebp

#这会导致gtk跳出事件循环
call gtk_main_quit

movl $0, %eax
leave
ret

#当有人单击应用程序窗口的x按钮时，发生delete事件
delete_handler:
movl $1, %eax
ret

#当组件被单击时发生click事件
click_handler:
pushl %ebp
movl %esp, %ebp

#创建对话框
pushl $NULL
pushl $GNOME_STOCK_BUTTON_NO
pushl $GNOME_STOCK_BUTTON_YES
pushl $GNOME_MESSAGE_BOX_QUESTION
pushl $quit_question
call gnome_message_box_new
addl $16, %esp

#将窗口模式设置为1
pushl $1
pushl %eax
call gtk_window_set_modal
popl %eax
addl $4, %esp

#现在显示对话框
pushl %eax
call gtk_widget_show
popl %eax

#以上操作会设置所有必要的信号处理程序
pushl %eax
call gnome_dialog_run_and_close
addl $4, %esp

#按钮0是yes按钮
cmpl $0, %eax
jne click_handler_end

call gtk_main_quit

click_handler_end:
leave
ret

