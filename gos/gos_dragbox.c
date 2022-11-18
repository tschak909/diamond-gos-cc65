/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Create a drag box for dragging objects
 * @param x position (0-39)
 * @param y position (0-191)
 * @param w width of box
 * @param h height of box
 */
void gos_dragbox(unsigned char x, unsigned char y, unsigned char w, unsigned char h,
		 unsigned char *nx, unsigned char *ny, unsigned char *mx, unsigned char *my)
{
  B0=x;
  B1=y;
  B2=w;
  B3=h;
  gos(45);
  *nx=B0;
  *ny=B1;
  *mx=B0;
  *my=B1;
}
