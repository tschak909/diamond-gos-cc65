/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Quickly calculate the address of position on screen.
 * @param x position
 * @param y position
 * @return address
 */
unsigned short gos_mul40(unsigned char x, unsigned char y)
{
  B6=x;
  B7=y;
  gos(54);
  return W7;
}
