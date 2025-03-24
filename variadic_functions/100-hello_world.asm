section .data
    msg     db "Hello, World", 10   ; Message with a newline
    len     equ $ - msg             ; Calculate message length

section .text
    global main

main:
    ; write(1, msg, len)
    mov     rax, 1      ; syscall number for write
    mov     rdi, 1      ; file descriptor 1 (stdout)
    mov     rsi, msg    ; pointer to the message
    mov     rdx, len    ; message length
    syscall             ; perform the system call

    ; exit(0)
    mov     rax, 60     ; syscall number for exit
    xor     rdi, rdi    ; exit code 0
    syscall             ; perform the system call
