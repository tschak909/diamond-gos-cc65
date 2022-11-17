/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Install an icon so it can be polled for events.
 * @param icon_num icon Number (0-31)
 * @param x X position (0-39)
 * @param y Y Position (0-191)
 * @param w Width (0-39)
 * @param h Height (0-191)
 * @param buf Pointer to bitmap buffer.
 */
void gos_installicon(unsigned char icon_num,
		  unsigned char x,
		  unsigned char y,
		  unsigned char w,
		  unsigned char h,
		  void *buf)
{
  B0=icon_num;
  B1=x;
  B2=y;
  B3=w;
  B4=h;
  W0=buf;
  gos(4);
}
