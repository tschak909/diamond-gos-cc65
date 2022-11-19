	.segment "ACCHDR"

	.import __CODE_END__
	.import __STARTADDRESS__

	.byte "Hello Wrld" 	; Accessory Name (10 bytes)
	.word __CODE_END__	; End of Code
	.WORD 0			; Init I think?
	.WORD __STARTADDRESS__	; Start address
