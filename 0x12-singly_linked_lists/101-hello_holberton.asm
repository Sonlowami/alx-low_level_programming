section .text
	global _start

_start:
	mov edx, len
	mov ecx, text
	mov ebx, 1
	mov eax, 4
	int 0x80

	mov eax, 1
	int 0x080
section .data
	text db "Hello, Holberton",10 ;add a new line
	len equ $ -text
