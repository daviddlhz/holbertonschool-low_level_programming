	section .data
	var db	"Hello, Holberton", `\n`

	section .text
	global main
main:
	mov     rax, 1
	mov     rdi, 1
	mov     rsi, var
	mov     rdx, 17
	syscall
	mov    rax, 60
	mov    rdi, 0
	syscall
