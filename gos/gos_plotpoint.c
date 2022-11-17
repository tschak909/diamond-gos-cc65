/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Plot a single point on the screen.
 * @param x X coordinate
 * @param y Y coordinate
 * @param c Color (0-3)
 * @param m mode (0=normal, 1=XOR)
 */
void gos_plotpoint(unsigned char x, unsigned char y, unsigned char c, unsigned char m)
{
  B0=x;
  B1=y;
  B2=c;
  B3=m;
  gos(24);
}
