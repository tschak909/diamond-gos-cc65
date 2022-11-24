	.segment "ACCHDR"

	.import __BSS_LOAD__
	.import __STARTADDRESS__

	.byte "Hello Wrld" 	; Accessory Name (10 bytes)
	.word __BSS_LOAD__	; End of Code
	.WORD __STARTADDRESS__	; Init I think?
	.WORD __STARTADDRESS__	; Start address
