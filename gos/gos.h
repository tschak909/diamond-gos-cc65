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

/* Window characteristics */
#define ADD_SIZER 1
#define ADD_HORIZONTAL 2
#define ADD_VERTICAL 4
#define ADD_DRAG 8
#define ADD_FULLER 16

/**
 * @var SCREENX - Mouse cursor X position, 0-159
 */ 
#define SCREENX (*(unsigned char *)0x9A80)

/**
 * @var SCREENX - Mouse cursor X position, 0-191
 */ 
#define SCREENY (*(unsigned char *)0x9A81)

/**
 * @var CLICK - Number of mouse clicks registered 0 = none, 1=dragged, 2 = single, 3 = double
 */
#define CLICK (*(unsigned char *)0x9A82)

/**
 * @var ACTIVE - Mouse active status, 0 = active, 1 = not active
 */
#define ACTIVE (*(unsigned char *)0x9A83)

/**
 * @var BACKBUF - 32-bit pointer to back buffer
 */
#define BACKBUF (*(unsigned long *)0x9A84)

/**
 * @var TOTALRAM - 32 bit value containing total RAM
 */
#define TOTALRAM (*(unsigned long *)0x9A88)

/**
 * @var SYSPTR - Double word that contains address of first byte of extra memory.
 */
#define SYSPTR (*(unsigned long *)0x9A8C)

/** 
 * @var CLICKTIME - Time in 60ths of a second that it takes to register a click vs a drag. Values in range from 12 to 20
 */
#define CLICKTIME (*(unsigned long *)0x9A90)

/**
 * @var PORT - The current input device port 0 or 1
 */
#define PORT (*(unsigned char *)0x9A91)

/**
 * @var INTERRUPTS - Status of NMIs.
 */
#define INTERRUPTS (*(unsigned char *)0x9A92)

/**
 * @var EVENTTYPE - Last Event
 */

typedef enum _event_type
  {
    EVENT_NOP,
    ICON,
    WINDOW,
    MENU,
    KEY,
    BACKGROUND
  } EventType;

#define EVENTTYPE (*(EventType *)0x9A93)

/**
 * @var The event structure
 */

typedef union _event
{
  struct _Icon
  {
    unsigned char number; /* Icon Number 0-31 */
    unsigned char rsvd1;  /* not used */
    unsigned char rsvd2;
    unsigned char rsvd3;
    unsigned char rsvd4;
  } Icon;
  
  struct _Window
  {
    enum _window_event_type
      {
	NONE,
	CLOSER,
	FULLER,
	DRAGGED,
	SIZED,
	SLIDE_X,
	SLIDE_Y,
	IN_WINDOW,
	NEW_WINDOW
      } type;
    unsigned char x; /* X (0-39) */
    unsigned char y; /* Y (0-191) */
    unsigned char rsvd1;
    unsigned char rsvd2;
  } Window;

  struct _Menu
  {
    unsigned char menu; /* Menu # */
    unsigned char item; /* Item # */
    unsigned char rsvd1;
    unsigned char rsvd2;
  } Menu;

  struct _Keypress
  {
    unsigned char key; /* key pressed # */
    unsigned char rsvd1;
    unsigned char rsvd2;
    unsigned char rsvd3;
  } Keypress;

  struct _Background /* Background clicked */
  {
    unsigned char x;
    unsigned char y;
    unsigned char rsvd1;
    unsigned char rsvd2;
  } Background;
} Event;

#define EVENT (*(Event *)0x9A94)

/**
 * @var EVENTTYPE3
 */
#define EVENTTYPE3 (*(unsigned char *)0x9A95)

/**
 * @var EVENTTYPE4
 */
#define EVENTTYPE4 (*(unsigned char *)0x9A96)

/**
 * @var EVENTTYPE5
 */
#define EVENTTYPE5 (*(unsigned char *)0x9A97)

/**
 * @var SYSFONT address of system font
 */
#define SYSFONT (*(unsigned short *)0x9A98)

/**
 * @var NUMFONTS not used
 */
#define NUMFONTS (*(unsigned char *)0x9A9A)

/**
 * @var RESETVEC saving DOSINI and DOSVEC here
 */
#define RESETVEC (*(unsigned long *)0x9A9B)

/**
 * @var DRIVES Map of drive letters to units
 */
typedef unsigned char Drives[7];
#define DRIVES (*(Drives *)0x9A9F)

/**
 * @var DEFAULTDRIVE specify default drive to save desktop config
 */
#define DEFAULTDRIVE (*(unsigned char *)0x9AA6)

/**
 * @var MOUSEVEC pointer to VBI vector for the mouse.
 */
#define MOUSEVEC (*(unsigned short *)0x9AA7)

/**
 * @var DLIMOUSEVEC
 */
#define DLIMOUSEVEC (*(unsigned short *)0x9AA9)

/**
 * @var XOFFSET Mouse current X offset, relative to current 8x8 cell.
 */
#define XOFFSET (*(unsigned char *)0x9AAB)

/**
 * @var YOFFSET Mouse current Y offset, relative to current 8x8 cell.
 */
#define YOFFSET (*(unsigned char *)0x9AAC)

/**
 * @var MOUSESHAPE 8 bytes of mouse bitmap data (8x8)
 */
typedef unsigned char MouseShape[8];
#define MOUSESHAPE (*(MouseShape *)0x9AAD)

/**
 * @var EXTRA pointer to first byte of extra memory.
 */
#define EXTRA (*(unsigned long *)0x9AB5)

/**
 * @var DESKTOPEXEC pointer to first byte of extra memory.
 */
#define DESKTOPEXEC (*(unsigned short *)0x9AB9)

/**
 * @var REZ Current desktop resolution 0 = hires, 1 = lores
 */
#define REZ (*(unsigned char *)0x9ABB)

/**
 * @var DOSTYPE $18 = Dos 2.x, $38 = SpartaDOS
 */
#define DOSTYPE (*(unsigned char *)0x9ABC)

/**
 * @var SPARTAFLAG $00 = DOS XE, $01 = SpartaDOS
 */
#define SPARTAFLAG (*(unsigned char *)0x9ABD)

/**
 * @var BANK Current active Diamond GOS bank
 */
#define BANK (*(unsigned char *)0x9ABE)

/**
 * @var CMDLINE 32-byte command line buffer
 */
typedef unsigned char CommandLine[32];
#define CMDLINE (*(CommandLine *)0x9ABF)

/**
 * @var BACKFILL The back-fill patterm
 */
#define BACKFILL (*(unsigned char *)0x9AE0)

/**
 * @var DELAY Keyboard repeat delay in 1/60ths sec values
 */
#define DELAY (*(unsigned char *)0x9AE1)

/**
 * @var REPEATDELAY repeat delay in 1/60ths sec after DELAY
 */
#define REPEATDELAY (*(unsigned char *)0x9AE2)

/**
 * @var SOLIDCOLOR The color diamond should default to for solid objs
 */
#define SOLIDCOLOR (*(unsigned char *)0x9AE3)

/**
 * @var CLEARCOLOR The color diamond should default to for clear objs
 */
#define CLEARCOLOR (*(unsigned char *)0x9AE4)

/**
 * @var BACKCOLOR The background color for Monochrome mode
 */
#define BACKCOLOR (*(unsigned char *)0x9AE5)
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

/**
 * @brief Moves Diamond's cursor to a new position on screen.
 * @param x new position
 * @param y new position
 */
void gos_movecursor(unsigned char x, unsigned char y);

/**
 * @brief Word sized multiply
 * @param a multiplicand 1
 * @param b multiplicand 2
 */
unsigned short gos_multiply(unsigned short a, unsigned short b);

/**
 * @brief Word sized divide
 * @param a numerator
 * @param b denominator
 * @return result in res, remainder in rem
 */
void gos_divide(unsigned short a, unsigned short b, unsigned short *res, unsigned short *rem);

/**
 * @brief Swaps an area on screen with a block image in memory
 * @param a Address of image data
 * @param x position
 * @param y position
 * @param w width
 * @param h height
 * @param cx clipping X region
 * @param cy clipping Y region
 * @param xo X offset
 * @param yo Y offset
 */
unsigned char gos_swapscreen(unsigned long a,
			     unsigned char x,
			     unsigned char y,
			     unsigned char w,
			     unsigned char h,
			     unsigned char cx,
			     unsigned char cy,
			     unsigned char xo,
			     unsigned char yo);

/**
 * @brief Inquires about the top (active) window's actual position on screen, and relative viewing position in the actual window space.
 * @return X position, Y position, relative X position, relative Y position.
 */
void gos_windget(unsigned char *x, unsigned char *y, unsigned short *rx, unsigned short *ry);

/**
 * @brief Turn mo use cursor/arrow on
 * @param x position
 * @param y position
 * @param st Style
 * @param s pointer to text buffer terminated with 0xFF.
 */
void gos_sysdraw(unsigned char x, unsigned char y, unsigned char st, void *s);

/**
 * @brief Turn mo use cursor/arrow on
 */
void gos_dragbox(unsigned char x, unsigned char y, unsigned char w, unsigned char h,
		 unsigned char *nx, unsigned char *ny, unsigned char *mx, unsigned char *my);

/**
 * @brief Inquires about overlapping icon on an area of the screen
 * @param x1 position
 * @param y1 position
 * @param x2 position
 * @param y2 position
 * @return overlapping window # (0 = none)
 */
unsigned char gos_overlapicon(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2);

/**
 * @brief Makes a legal exit to the Diamond GOS desktop.
 */
void gos_execdesktop(void);

/**
 * @brief Invert a touch area in a dialog box
 * @param touch_area (touch area number)
 */
void gos_inverttouch(unsigned char touch_area);

/**
 * @brief Sets a new actual width/height for the top window.
 * @param x new actual width
 * @param y new actual height
 */
void gos_windset(unsigned short x, unsigned short y);

/**
 * @brief redraws window title
 * @param c Fill character (0=blank, 10=shaded)
 */
void gos_windtitle(unsigned short c);

/**
 * @brief Sets a new actual width/height for the top window.
 * @param w Window number (0-3)
 */
void gos_windactivate(unsigned short w);

/**
 * @brief Loads (and executes) a binary file.
 * @param d Disable flag (0=diamond app, 1=disable diamond)
 * @param s pointer to EOL terminated filename
 */
void gos_binload(unsigned char d, void *s);

/**
 * @brief Quickly calculate the address of position on screen.
 * @param x position
 * @param y position
 * @return address
 */
unsigned short gos_mul40(unsigned char x, unsigned char y);

/**
 * @brief Fills an area on screen with given bit pattern
 * @param a Address of image data
 * @param p Fill pattern (low byte only)
 * @param x position
 * @param y position
 * @param w width
 * @param h height
 * @param xc Clipping value X
 * @param yc Clipping Value y
 * @param xo X offset
 * @param yo Y offset
 */
unsigned char gos_fillscreen(unsigned long a, unsigned short p, unsigned char x, unsigned char y, unsigned char w, unsigned char h, unsigned char xc, unsigned char yc, unsigned char xo, unsigned char yo);

/**
 * @brief Call our file selector routine allowing the user to select a file and have that returned to the calling program.
 * @param ext pointer to extender to match files for (EOL terminated)
 * @param def pointer to default filename (EOL terminated)
 * @param title pointer to title string for dialog (0xFF terminated)
 * @param filename pointer to filename buffer
 * @param directory pointer to directory to open
 * @return pointer to filename
 */
char* gos_fileselect(char *ext, char *def, char *title, char *filename, char *directory);

/**
 * @brief Creates a simple sub-class of a dialog box, known as a message box. Containing an icon (32x32), a text string, and ewither an OK button or both an OK and cancel button.
 * @param icon pointer to icon image data
 * @param s pointer to text string (terminated by 0xFF)
 * @param t Type of message box (0=OK, 1=OK and Cancel)
 * @return 0=OK, 1=Cancel
*/
unsigned char gos_messagebox(void *icon, char *s, unsigned char t);

/**
 * @brief Check the GOS environment to see if any events have occurred. One iteration of event loop.
 */
void gos_event(void);
