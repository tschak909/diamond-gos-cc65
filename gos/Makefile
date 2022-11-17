CC=cc65 -t atari 
AS=ca65 -t atari 
AR=ar65
LIB=gos.lib
OBJ=obj
MKDIR=mkdir

.PHONY: clean

all: obj gos.o gos_init.o gos_exit.o gos_paraprnt.o gos_togglezero.o
	$(AR) r $(LIB) obj/gos.o
	$(AR) r $(LIB) obj/gos_init.o
	$(AR) r $(LIB) obj/gos_exit.o
	$(AR) r $(LIB) obj/gos_paraprnt.o
	$(AR) r $(LIB) obj/gos_togglezero.o

obj:
	$(MKDIR) -p obj

gos.o:
	$(AS) -oobj/gos.o gos.s

gos_init.o:
	$(CC) -oobj/gos_init.s gos_init.c
	$(AS) -oobj/gos_init.o obj/gos_init.s

gos_exit.o:
	$(CC) -oobj/gos_exit.s gos_exit.c
	$(AS) -oobj/gos_exit.o obj/gos_exit.s

gos_paraprnt.o:
	$(CC) -oobj/gos_paraprnt.s gos_paraprnt.c
	$(AS) -oobj/gos_paraprnt.o obj/gos_paraprnt.s

gos_togglezero.o:
	$(CC) -oobj/gos_togglezero.s gos_togglezero.c
	$(AS) -oobj/gos_togglezero.o obj/gos_togglezero.s

clean:
	$(RM) -rf $(OBJ) $(LIB)
