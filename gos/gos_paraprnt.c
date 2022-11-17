/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

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
		  char *s)
{
  B0=xo;
  B1=yo;
  B2=ls;
  W1=x;
  W2=y;
  W3=xc;
  W4=yc;
  W5=s;
  gos(2);
}
