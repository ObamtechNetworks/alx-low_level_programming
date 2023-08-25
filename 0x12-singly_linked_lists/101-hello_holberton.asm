section .data
	format db "Hello, Holberton",0x0A ;This is the string to print, followed by a new line

section .text
	extern printf
	global main
main:
	push rbp
	mov rdi, format
	xor rax, rax ;Clear rax before calling printf
        call printf
	pop rbp
	ret
