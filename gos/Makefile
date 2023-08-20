CC=cl65 -t atari 
CFLAGS=-c -O
AS=ca65 -t atari 
AR=ar65
LIB=gos.lib
OBJ=obj
MKDIR=mkdir

.PHONY: clean

all: $(OBJ) $(LIB)

$(OBJ):
	$(MKDIR) -p $@

$(LIB): $(OBJ)/gos.o $(patsubst %.c,$(OBJ)/%.o,$(wildcard *.c))
	$(AR) r $(LIB) $?

$(OBJ)/gos.o: gos.s
	$(AS) -o$@ $<

$(OBJ)/gos_init.o: gos_init.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_exit.o: gos_exit.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_paraprnt.o: gos_paraprnt.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_togglezero.o: gos_togglezero.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_installicon.o: gos_installicon.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_moveicon.o: gos_moveicon.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_removeicon.o: gos_removeicon.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_shapeicon.o: gos_shapeicon.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_setmenu.o: gos_setmenu.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_menucheck.o: gos_menucheck.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_menuenable.o: gos_menuenable.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_mouseon.o: gos_mouseon.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_mouseoff.o: gos_mouseoff.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_defmouse.o: gos_defmouse.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_dodialog.o: gos_dodialog.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_updatedialog.o: gos_updatedialog.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_eventdialog.o: gos_eventdialog.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_releasedialog.o: gos_releasedialog.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_textdialog.o: gos_textdialog.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windopen.o: gos_windopen.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windclose.o: gos_windclose.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windmove.o: gos_windmove.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_winddraw.o: gos_winddraw.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_plotpoint.o: gos_plotpoint.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_plotline.o: gos_plotline.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_plotbox.o: gos_plotbox.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_movetoscreen.o: gos_movetoscreen.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_movefromscreen.o: gos_movefromscreen.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_clearscreen.o: gos_clearscreen.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_invertscreen.o: gos_invertscreen.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_move.o: gos_move.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_zero.o: gos_zero.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_swap.o: gos_swap.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_cursoron.o: gos_cursoron.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_cursoroff.o: gos_cursoroff.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_defcursor.o: gos_defcursor.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_movecursor.o: gos_movecursor.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_multiply.o: gos_multiply.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_divide.o: gos_divide.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_swapscreen.o: gos_swapscreen.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windclear.o: gos_windclear.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windget.o: gos_windget.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_sysdraw.o: gos_sysdraw.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_dragbox.o: gos_dragbox.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_overlapicon.o: gos_overlapicon.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_overlapwindow.o: gos_overlapwindow.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_execdesktop.o: gos_execdesktop.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_inverttouch.o: gos_inverttouch.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windset.o: gos_windset.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windtitle.o: gos_windtitle.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_windactivate.o: gos_windactivate.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_binload.o: gos_binload.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_mul40.o: gos_mul40.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_fillscreen.o: gos_fillscreen.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_fileselect.o: gos_fileselect.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_messagebox.o: gos_messagebox.c
	$(CC) $(CFLAGS) -o$@ $<

$(OBJ)/gos_event.o: gos_event.c
	$(CC) $(CFLAGS) -o$@ $<

clean:
	$(RM) -rf $(OBJ) $(LIB)
