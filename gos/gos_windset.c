/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Sets a new actual width/height for the top window.
 * @param x new actual width
 * @param y new actual height
 */
void gos_windset(unsigned short x, unsigned short y)
{
  W0=x;
  W1=y;
  gos(50);
}
