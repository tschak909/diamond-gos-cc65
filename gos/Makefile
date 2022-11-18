CC=cc65 -t atari 
AS=ca65 -t atari 
AR=ar65
LIB=gos.lib
OBJ=obj
MKDIR=mkdir

.PHONY: clean

all: obj gos.o gos_init.o gos_exit.o gos_paraprnt.o gos_togglezero.o gos_installicon.o gos_moveicon.o \
	gos_removeicon.o gos_shapeicon.o gos_setmenu.o gos_menucheck.o gos_menuenable.o gos_mouseon.o \
	gos_mouseoff.o gos_defmouse.o gos_dodialog.o gos_updatedialog.o gos_eventdialog.o gos_releasedialog.o \
	gos_textdialog.o gos_windopen.o gos_windclose.o gos_windmove.o gos_winddraw.o gos_plotpoint.o \
	gos_plotline.o gos_plotbox.o gos_movetoscreen.o gos_movefromscreen.o gos_clearscreen.o \
	gos_invertscreen.o gos_move.o gos_zero.o gos_swap.o gos_cursoron.o gos_cursoroff.o \
	gos_defcursor.o gos_movecursor.o gos_multiply.o gos_divide.o gos_swapscreen.o gos_windclear.o \
	gos_windget.o gos_sysdraw.o
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
	$(AR) r $(LIB) obj/gos_eventdialog.o
	$(AR) r $(LIB) obj/gos_releasedialog.o
	$(AR) r $(LIB) obj/gos_textdialog.o
	$(AR) r $(LIB) obj/gos_windopen.o
	$(AR) r $(LIB) obj/gos_windclose.o
	$(AR) r $(LIB) obj/gos_windmove.o
	$(AR) r $(LIB) obj/gos_winddraw.o
	$(AR) r $(LIB) obj/gos_plotpoint.o
	$(AR) r $(LIB) obj/gos_plotline.o
	$(AR) r $(LIB) obj/gos_plotbox.o
	$(AR) r $(LIB) obj/gos_movetoscreen.o
	$(AR) r $(LIB) obj/gos_movefromscreen.o
	$(AR) r $(LIB) obj/gos_clearscreen.o
	$(AR) r $(LIB) obj/gos_invertscreen.o
	$(AR) r $(LIB) obj/gos_move.o
	$(AR) r $(LIB) obj/gos_zero.o
	$(AR) r $(LIB) obj/gos_swap.o
	$(AR) r $(LIB) obj/gos_cursoron.o
	$(AR) r $(LIB) obj/gos_cursoroff.o
	$(AR) r $(LIB) obj/gos_defcursor.o
	$(AR) r $(LIB) obj/gos_movecursor.o
	$(AR) r $(LIB) obj/gos_multiply.o
	$(AR) r $(LIB) obj/gos_divide.o
	$(AR) r $(LIB) obj/gos_swapscreen.o
	$(AR) r $(LIB) obj/gos_windclear.o
	$(AR) r $(LIB) obj/gos_windget.o
	$(AR) r $(LIB) obj/gos_sysdraw.o

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

gos_eventdialog.o:
	$(CC) -oobj/gos_eventdialog.s gos_eventdialog.c
	$(AS) -oobj/gos_eventdialog.o obj/gos_eventdialog.s

gos_releasedialog.o:
	$(CC) -oobj/gos_releasedialog.s gos_releasedialog.c
	$(AS) -oobj/gos_releasedialog.o obj/gos_releasedialog.s

gos_textdialog.o:
	$(CC) -oobj/gos_textdialog.s gos_textdialog.c
	$(AS) -oobj/gos_textdialog.o obj/gos_textdialog.s

gos_windopen.o:
	$(CC) -oobj/gos_windopen.s gos_windopen.c
	$(AS) -oobj/gos_windopen.o obj/gos_windopen.s

gos_windclose.o:
	$(CC) -oobj/gos_windclose.s gos_windclose.c
	$(AS) -oobj/gos_windclose.o obj/gos_windclose.s

gos_windmove.o:
	$(CC) -oobj/gos_windmove.s gos_windmove.c
	$(AS) -oobj/gos_windmove.o obj/gos_windmove.s

gos_winddraw.o:
	$(CC) -oobj/gos_winddraw.s gos_winddraw.c
	$(AS) -oobj/gos_winddraw.o obj/gos_winddraw.s

gos_plotpoint.o:
	$(CC) -oobj/gos_plotpoint.s gos_plotpoint.c
	$(AS) -oobj/gos_plotpoint.o obj/gos_plotpoint.s

gos_plotline.o:
	$(CC) -oobj/gos_plotline.s gos_plotline.c
	$(AS) -oobj/gos_plotline.o obj/gos_plotline.s

gos_plotbox.o:
	$(CC) -oobj/gos_plotbox.s gos_plotbox.c
	$(AS) -oobj/gos_plotbox.o obj/gos_plotbox.s

gos_movetoscreen.o:
	$(CC) -oobj/gos_movetoscreen.s gos_movetoscreen.c
	$(AS) -oobj/gos_movetoscreen.o obj/gos_movetoscreen.s

gos_movefromscreen.o:
	$(CC) -oobj/gos_movefromscreen.s gos_movefromscreen.c
	$(AS) -oobj/gos_movefromscreen.o obj/gos_movefromscreen.s

gos_clearscreen.o:
	$(CC) -oobj/gos_clearscreen.s gos_clearscreen.c
	$(AS) -oobj/gos_clearscreen.o obj/gos_clearscreen.s

gos_invertscreen.o:
	$(CC) -oobj/gos_invertscreen.s gos_invertscreen.c
	$(AS) -oobj/gos_invertscreen.o obj/gos_invertscreen.s

gos_move.o:
	$(CC) -oobj/gos_move.s gos_move.c
	$(AS) -oobj/gos_move.o obj/gos_move.s

gos_zero.o:
	$(CC) -oobj/gos_zero.s gos_zero.c
	$(AS) -oobj/gos_zero.o obj/gos_zero.s

gos_swap.o:
	$(CC) -oobj/gos_swap.s gos_swap.c
	$(AS) -oobj/gos_swap.o obj/gos_swap.s

gos_cursoron.o:
	$(CC) -oobj/gos_cursoron.s gos_cursoron.c
	$(AS) -oobj/gos_cursoron.o obj/gos_cursoron.s

gos_cursoroff.o:
	$(CC) -oobj/gos_cursoroff.s gos_cursoroff.c
	$(AS) -oobj/gos_cursoroff.o obj/gos_cursoroff.s

gos_defcursor.o:
	$(CC) -oobj/gos_defcursor.s gos_defcursor.c
	$(AS) -oobj/gos_defcursor.o obj/gos_defcursor.s

gos_movecursor.o:
	$(CC) -oobj/gos_movecursor.s gos_movecursor.c
	$(AS) -oobj/gos_movecursor.o obj/gos_movecursor.s

gos_multiply.o:
	$(CC) -oobj/gos_multiply.s gos_multiply.c
	$(AS) -oobj/gos_multiply.o obj/gos_multiply.s

gos_divide.o:
	$(CC) -oobj/gos_divide.s gos_divide.c
	$(AS) -oobj/gos_divide.o obj/gos_divide.s

gos_swapscreen.o:
	$(CC) -oobj/gos_swapscreen.s gos_swapscreen.c
	$(AS) -oobj/gos_swapscreen.o obj/gos_swapscreen.s

gos_windclear.o:
	$(CC) -oobj/gos_windclear.s gos_windclear.c
	$(AS) -oobj/gos_windclear.o obj/gos_windclear.s

gos_windget.o:
	$(CC) -oobj/gos_windget.s gos_windget.c
	$(AS) -oobj/gos_windget.o obj/gos_windget.s

gos_sysdraw.o:
	$(CC) -oobj/gos_sysdraw.s gos_sysdraw.c
	$(AS) -oobj/gos_sysdraw.o obj/gos_sysdraw.s

clean:
	$(RM) -rf $(OBJ) $(LIB)
