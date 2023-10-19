section .data
    hello db "Hello, Holberton",10,0  ; The string to print, terminated with a newline (10) and null (0)

section .text
    global _start

_start:
    ; Call printf
    mov rdi, hello   ; Load the address of the string into rdi
    call printf     ; Call printf function

    ; Exit the program
    mov rax, 60     ; syscall number for exit
    xor rdi, rdi    ; exit status (0)
    syscall

section .text
    extern printf
