global main
extern printf

section .data
	text db 'Hello, Holberton', 0

section .text
main:
	mov edi, text
	xor eax, eax
	call printf
	xor eax, eax
	ret
