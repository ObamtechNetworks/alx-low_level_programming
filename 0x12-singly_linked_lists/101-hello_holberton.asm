section .data
	format db "Hello, Holberton",0x0A ;This is the string to print, followed by a new line

section .text
	global main
	extern printf
main:
	push rbp
	mov rdi, format
	call printf
	pop rbp
	ret
