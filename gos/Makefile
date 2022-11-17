CC=cc65 -t atari 
AS=ca65 -t atari 
AR=ar65
LIB=gos.lib
OBJ=obj
MKDIR=mkdir

.PHONY: clean

all: obj gos.o gos_init.o gos_exit.o gos_paraprnt.o gos_togglezero.o gos_installicon.o gos_moveicon.o \
	gos_removeicon.o gos_shapeicon.o gos_setmenu.o gos_menucheck.o gos_menuenable.o gos_mouseon.o \
	gos_mouseoff.o gos_defmouse.o gos_dodialog.o gos_updatedialog.o
	$(AR) r $(LIB) obj/gos.o
	$(AR) r $(LIB) obj/gos_init.o
	$(AR) r $(LIB) obj/gos_exit.o
	$(AR) r $(LIB) obj/gos_paraprnt.o
	$(AR) r $(LIB) obj/gos_togglezero.o
	$(AR) r $(LIB) obj/gos_installicon.o
	$(AR) r $(LIB) obj/gos_moveicon.o
	$(AR) r $(LIB) obj/gos_removeicon.o
	$(AR) r $(LIB) obj/gos_shapeicon.o
	$(AR) r $(LIB) obj/gos_setmenu.o
	$(AR) r $(LIB) obj/gos_menucheck.o
	$(AR) r $(LIB) obj/gos_menuenable.o
	$(AR) r $(LIB) obj/gos_mouseon.o
	$(AR) r $(LIB) obj/gos_mouseoff.o
	$(AR) r $(LIB) obj/gos_defmouse.o
	$(AR) r $(LIB) obj/gos_dodialog.o
	$(AR) r $(LIB) obj/gos_updatedialog.o

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

gos_installicon.o:
	$(CC) -oobj/gos_installicon.s gos_installicon.c
	$(AS) -oobj/gos_installicon.o obj/gos_installicon.s

gos_moveicon.o:
	$(CC) -oobj/gos_moveicon.s gos_moveicon.c
	$(AS) -oobj/gos_moveicon.o obj/gos_moveicon.s

gos_removeicon.o:
	$(CC) -oobj/gos_removeicon.s gos_removeicon.c
	$(AS) -oobj/gos_removeicon.o obj/gos_removeicon.s

gos_shapeicon.o:
	$(CC) -oobj/gos_shapeicon.s gos_shapeicon.c
	$(AS) -oobj/gos_shapeicon.o obj/gos_shapeicon.s

gos_setmenu.o:
	$(CC) -oobj/gos_setmenu.s gos_setmenu.c
	$(AS) -oobj/gos_setmenu.o obj/gos_setmenu.s

gos_menucheck.o:
	$(CC) -oobj/gos_menucheck.s gos_menucheck.c
	$(AS) -oobj/gos_menucheck.o obj/gos_menucheck.s

gos_menuenable.o:
	$(CC) -oobj/gos_menuenable.s gos_menuenable.c
	$(AS) -oobj/gos_menuenable.o obj/gos_menuenable.s

gos_mouseon.o:
	$(CC) -oobj/gos_mouseon.s gos_mouseon.c
	$(AS) -oobj/gos_mouseon.o obj/gos_mouseon.s

gos_mouseoff.o:
	$(CC) -oobj/gos_mouseoff.s gos_mouseoff.c
	$(AS) -oobj/gos_mouseoff.o obj/gos_mouseoff.s

gos_defmouse.o:
	$(CC) -oobj/gos_defmouse.s gos_defmouse.c
	$(AS) -oobj/gos_defmouse.o obj/gos_defmouse.s

gos_dodialog.o:
	$(CC) -oobj/gos_dodialog.s gos_dodialog.c
	$(AS) -oobj/gos_dodialog.o obj/gos_dodialog.s

gos_updatedialog.o:
	$(CC) -oobj/gos_updatedialog.s gos_updatedialog.c
	$(AS) -oobj/gos_updatedialog.o obj/gos_updatedialog.s

clean:
	$(RM) -rf $(OBJ) $(LIB)
