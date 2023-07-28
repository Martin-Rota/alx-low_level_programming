section .data
    hello db "Hello, Holberton", 0
    format db "%s", 10, 0

section .text
    global _start

_start:
    ; Call printf function
    mov rdi, format    ; First argument: format string
    mov rsi, hello     ; Second argument: address of hello string
    xor rax, rax       ; Clear rax register (since printf is a variadic function)
    call printf        ; Call printf function

    ; Exit the program
    mov rax, 60        ; Syscall number for exit
    xor rdi, rdi       ; Exit status 0
    syscall           ; Invoke syscall

section .bss
    ; Empty BSS section to satisfy linking requirements
