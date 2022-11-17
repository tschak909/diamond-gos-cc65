/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Moves the active window to a new position
 * @param x New X position
 * @param y New Y position
 */
void gos_windmove(unsigned char x, unsigned char y)
{
  B0=x;
  B1=y;
  gos(21);
}
