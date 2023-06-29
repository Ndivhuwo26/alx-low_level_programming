	Global   Main
	  Extern    Printf
Main:
	  Mov   Edi, Format
	  Xor   Eax, Eax
	  Call  Printf
	  Mov   Eax, 0
	  Ret

Format: db `Hello, Holberton\n`,0

