/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Moves Diamond's cursor to a new position on screen.
 * @param x new position
 * @param y new position
 */
void gos_movecursor(unsigned char x, unsigned char y)
{
  B0=x;
  B1=y;
  gos(37);
}
