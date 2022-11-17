	;;
	;; gos.s - Call Diamond GOS with function #
	;;

	.export _gos

	;; Function # in A
_gos:	JSR $8E00
	RTS
	
