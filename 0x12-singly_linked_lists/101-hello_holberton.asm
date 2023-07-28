global main
extern printf

section .text
main:
	push rbp        ; make sure to keep stack aligned
	mov rbp, rsp

	; Prepare the arguments for printf
;	xor eax, eax    ; (returning value for printf) clearing eax
;	lea rdi, [hello_msg]    ; address of message is stored into rdi
	mov rdi, format		; First argument: pointer to the format string
	mov rsi, hello_msg	; Second argument: pointer to the hello_msg string

	call printf     ; call the printf function

	add rsp, 16
	leave           ; mov rsp, rbp, pop rbp
	ret

section .data
hello_msg db "Hello, Holberton", 0
format db "%s", 10, 0   ; Format string for printf with a new line character
