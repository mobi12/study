.section .data

firststring:
.ascii "Hello! %s is a %s who loves the number %d\n\0"
name:
.ascii "Jonathan\0"
personstring:
.ascii "person\0"
numberloved:
.long 3
.section .text
.globl _start
_start:
pushl numberloved
pushl $personstring
pushl $name
pushl $firststring
call printf
pushl $0
call exit
