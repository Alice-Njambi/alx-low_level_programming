section .data
    msg db 'Hello, Holberton', 10, 0    ; Message with a newline character and null terminator
    format_string db '%s', 0            ; Format string for printf

section .text
    global main
    extern printf

main:
    ; Prepare to call printf
    mov rdi, format_string    ; Format string (first argument to printf)
    mov rsi, msg              ; Message to print (second argument to printf)
    call printf               ; Call printf

    ; Exit the program
    mov eax, 0                ; Return code 0
    ret

