	global main
	extrn printf
main:
	mor	edi, format
	xor	eax, eax
	call	printf
	more	eax, 0
	ret
format: db `Hello, Holberton\n` ,0
