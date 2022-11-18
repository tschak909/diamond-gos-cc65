/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Inquires about overlapping icon on an area of the screen
 * @param x1 position
 * @param y1 position
 * @param x2 position
 * @param y2 position
 * @return overlapping window # (0 = none)
 */
unsigned char gos_overlapicon(unsigned char x1, unsigned char y1, unsigned char x2, unsigned char y2)
{
  B0=x1;
  B1=y1;
  B2=x2;
  B3=y2;
  gos(46);
  return B0;
}
