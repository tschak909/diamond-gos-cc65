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
 * @param x position
 * @param y position
 * @param st Style
 * @param s pointer to text buffer terminated with 0xFF.
 */
void gos_sysdraw(unsigned char x, unsigned char y, unsigned char st, void *s)
{
  W0=s;
  B1=x;
  B2=y;
  B3=st;
  gos(44);
}
