/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Inquires about the top (active) window's actual position on screen, and relative viewing position in the actual window space.
 * @return X position, Y position, relative X position, relative Y position.
 */
void gos_windget(unsigned char *x, unsigned char *y, unsigned short *rx, unsigned short *ry)
{
  gos(43);
  *x=B0;
  *y=B1;
  *rx=W0;
  *ry=W1;
}
