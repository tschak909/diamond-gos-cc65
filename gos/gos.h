/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

/**
 * @brief the 16 virtual Diamond GOS registers
 */
#define W0 (*(unsigned short *)0x80)
#define W1 (*(unsigned short *)0x82)
#define W2 (*(unsigned short *)0x84)
#define W3 (*(unsigned short *)0x86)
#define W4 (*(unsigned short *)0x88)
#define W5 (*(unsigned short *)0x8A)
#define W6 (*(unsigned short *)0x8C)
#define W7 (*(unsigned short *)0x8E)
#define B0 (*(unsigned char *)0x90)
#define B1 (*(unsigned char *)0x91)
#define B2 (*(unsigned char *)0x92)
#define B3 (*(unsigned char *)0x93)
#define B4 (*(unsigned char *)0x94)
#define B5 (*(unsigned char *)0x95)
#define B6 (*(unsigned char *)0x96)
#define B7 (*(unsigned char *)0x97)

/**
 * @brief call GOS with Function #
 * @param funcno Function #
 */
void __fastcall__ gos(unsigned char funcno);

/**
 * @brief Initialize Diamond with given resolution
 * @param res 0 = Hires, 1 = Lores
 */
void gos_init(unsigned char res);

/**
 * @brief Exit from Diamond GOS
 */
void gos_exit(void);

/**
 * @brief Print text at specified location.
 * @param x X position in pixels
 * @param y Y position in pixels
 * @param xc X clipping extent in pixels
 * @param yc Y clipping extent in pixels
 * @param xo X offset in pixels
 * @param yo Y offset in pixels
 * @param ls Line spacing in pixels
 * @param buf Pointer to null terminated string.
 */
void gos_paraprnt(unsigned short x,
		  unsigned short y,
		  unsigned short xc,
		  unsigned short yc,
		  unsigned char xo,
		  unsigned char yo,
		  unsigned char ls,
		  char *s);

/**
 * @brief Swap Diamond's buffer with built-in buffer.
 */
void gos_togglezero(void);

/**
 * @brief Move an existing icon to another position on screen
 * @param icon_num Icon number (0-31)
 * @param x New X position (0-39)
 * @param y New Y position (0-191)
 */
void gos_moveicon(unsigned char icon_num, unsigned char x, unsigned char y);

/**
 * @brief Removes an icon that has been installed
 * @param icon_num Icon # (0-31)
 */
void gos_removeicon(unsigned char icon_num);

/**
 * @brief Changes the shape of an existing icon (used to animate
 *        icons e.g. the disk drives on Diamond DeskTop)
 * @param icon_num icon Number (0-31)
 * @param buf Pointer to bitmap buffer.
 */
void gos_shapeicon(unsigned char icon_num, void *buf);

/**
 * @brief Initalizes a new menu bar for Diamond
 * @param menu_bar Address of Menu Bar
 * @param menu_tree Address of menu trees
 */
void gos_setmenu(void* menu_bar, void* menu_trees);

/**
 * @brief Inert or reomve a check from a menu item (can also place characters other than checks next to menu items)
 * @param menu_number (0-7)
 * @param menu_item (1-22)
 * @param c character to insert (0=Blank, 8=Check)
 */
void gos_menucheck(unsigned char menu_number, unsigned char menu_item, unsigned char c);

/**
 * @brief Enable or disable a menu item.
 * @param menu_number (0-7)
 * @param menu_item (1-22)
 * @param e 0=enable 1=disable
 */
void gos_menuenable(unsigned char menu_number, unsigned char menu_item, unsigned char e);

/**
 * @brief Turn mo use cursor/arrow on
 */
void gos_mouseon(void);

/**
 * @brief Creates a dialog box.
 * @param w Width of Dialog Box (0-39)
 * @param h Height of dialog box (0-191)
 * @param objects Pointer to object list
 * @param areas Pointer to touch areas
 */
void gos_dodialog(unsigned char w, unsigned char h, void *objects, void *areas);

/**
 * @brief Creates a dialog box.
 * @param objects Pointer to object list
 */
void gos_updatedialog(void *objects);

/**
 * @brief Waits for an event to occur in a Dialog Box, blocks.
 * @return 16-bit value where mm|tt mm = # of mouse clicks, tt = touch area affected.
 */
unsigned short gos_eventdialog(void);

/**
 * @brief Terminates usage of the current dialog box.
 */
void gos_releasedialog(void);

/**
 * @brief Opens an area in dialog box for text entry. This routine will also filter out invalid input.
 * @param maxlen Maximum length (0-255)
 * @param start Starting position of edit cursor (0-255)
 * @param exit Exit conditions (0=only on C/R, 255=when buffer is full)
 * @param x X pos of text area (0-39)
 * @param y Y pos of text area (0-191)
 * @param s pointer to string buffer
 * @param f pointer to character filter
 * @param x pointer to exit filter
 */
void gos_textdialog(unsigned char maxlen,
		    unsigned char start,
		    unsigned char exit,
		    unsigned char x,
		    unsigned char y,
		    void *s,
		    void *f,
		    void *e);

/**
 * @brief opens a window.
 * @param caps Window Characteristics: 1 = sizer, 2 = horizontal, 4 = vertical scroller, 8 = drag, 16 = fuller
 * @param x X coordinate of window (0-39)
 * @param y Y coordinate of window (0-191)
 * @param w width of window (0-39)
 * @param h height of window (0-191)
 * @param b Buffer flag (0 = no, 1 = buffering)
 * @param t pointer to title string (ending with 0xFF byte)
 * @param s pointer to subtitle string (ending with 0xFF byte)
 * @param sw Actual Width of Window
 * @param sh Actual Height of Window
 * @param a double word address of buffer
 */
void gos_windopen(unsigned char caps,
		  unsigned char x,
		  unsigned char y,
		  unsigned char w,
		  unsigned char h,
		  unsigned char b,
		  void *t,
		  void *s,
		  unsigned short sw,
		  unsigned short sh,
		  unsigned long a);

/**
 * @brief close the active window.
 */
void gos_windclose(void);

/**
 * @brief Moves the active window to a new position
 * @param x New X position
 * @param y New Y position
 */
void gos_windmove(unsigned char x, unsigned char y);

/**
 * @brief Draws objects in a window, and updates the window subtitle.
 * @param objects Pointer to object tree
 */
void gos_winddraw(void *objects);

/**
 * @brief Plots a line on the screen
 * @param x1 Beginning X position (0-39)
 * @param y1 Beginning Y position (0-191)
 * @param x2 Ending X position (0-39)
 * @param y2 Ending Y position (0-191)
 * @param c Color (0-3)
 * @param m Mode (0=normal, 1=XOR)
 */
void gos_plotline(unsigned char x1,
		  unsigned char y1,
		  unsigned char x2,
		  unsigned char y2,
		  unsigned char c,
		  unsigned char m);

/**
 * @brief Moves a block image from memory onto the screen
 * @param a Address of image data
 * @param x position
 * @param y position
 * @param w width
 * @param h height 
 * @param cx Clipping value X
 * @param cy Clipping value Y
 * @param xo X offset
 * @param yo Y offset
 * @return $FF means error occurred
 */
unsigned char gos_movetoscreen(unsigned long a,
			       unsigned char x,
			       unsigned char y,
			       unsigned char w,
			       unsigned char h,
			       unsigned char cx,
			       unsigned char cy,
			       unsigned char xo,
			       unsigned char yo);

/**
 * @brief Moves a block image from screen into memory
 * @param a Address of image data
 * @param x position
 * @param y position
 * @param w width
 * @param h height 
 * @param cx Clipping value X
 * @param cy Clipping value Y
 * @param xo X offset
 * @param yo Y offset
 * @return $FF means error occurred.
 */
unsigned char gos_movefromscreen(unsigned long a,
				 unsigned char x,
				 unsigned char y,
				 unsigned char w,
				 unsigned char h,
				 unsigned char cx,
				 unsigned char cy,
				 unsigned char xo,
				 unsigned char yo);

/**
 * @brief Clears an area on screen
 * @param x position
 * @param y position
 * @param w width
 * @param h height 
 * @param cx Clipping value X
 * @param cy Clipping value Y
 * @param xo X offset
 * @param yo Y offset
 * @return $FF means error occurred.
 */
unsigned char gos_clearscreen(unsigned char x,
			      unsigned char y,
			      unsigned char w,
			      unsigned char h,
			      unsigned char cx,
			      unsigned char cy,
			      unsigned char xo,
			      unsigned char yo);

/**
 * @brief Turn mo use cursor/arrow on
 * @param a Source address
 * @param b Destination address
 * @param n Number of bytes to move
 * @return 0xFF if an error occurred.
 */
unsigned char gos_move(unsigned long a,
		       unsigned long b,
		       unsigned short n);

/**
 * @brief Zero a block of memory
 * @param b Address to zero
 * @param n Number of bytes to zero
 * @return 0xFF if an error occurred.
 */
unsigned char gos_zero(unsigned long b,
		       unsigned short n);

/**
 * @brief Swap a block of memory with another.
 * @param a Source address
 * @param b Destination address
 * @param n Number of bytes to swap
 * @return 0xFF if an error occurred.
 */
unsigned char gos_swap(unsigned long a,
		       unsigned long b,
		       unsigned short n);

/**
 * @brief Turn cursor on
 */
void gos_cursoron(void);

/**
 * @brief Turn cursor on
 */
void gos_cursoroff(void);

/**
 * @brief Define Cursor characteristics
 * @param b Bit pattern to use for cursor, default is $80
 * @param h height of the cursor
 * @param f flash rate is 60ths of a second.
 */
void gos_defcursor(unsigned char b, unsigned char h, unsigned char f);


