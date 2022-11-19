/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

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
		  unsigned long a)
{
  B0=caps;
  B1=x;
  B2=y;
  B3=w;
  B4=h;
  B5=b;
  W0=(unsigned short)t;
  W1=(unsigned short)s;
  W2=sw;
  W3=sh;
  W4=a & 0xFFFF;
  W5=a >> 16;
  gos(19);
}
