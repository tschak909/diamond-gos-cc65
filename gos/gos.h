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
