global main
extern printf

section .data
    message db "Hello, Holberton", 10, 0

section .text
main:
    push rbp
    mov rbp, rsp

    lea rdi, [message]
    mov rax, 0
    call printf

    mov rsp, rbp
    pop rbp
    ret

