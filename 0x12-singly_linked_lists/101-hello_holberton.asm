section .data
	format db "Hello, Holberton", 0x0A ;This is the string to print, followed by a new line

section .text
	extern printf
	global main
main:
	xor rax, rax ;clear rax, return value to 0
	push rbp
	mov rdi, format
        call printf
	pop rbp
	ret
