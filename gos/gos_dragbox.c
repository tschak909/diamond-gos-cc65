/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Turn mo use cursor/arrow on
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
