/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Define Cursor characteristics
 * @param b Bit pattern to use for cursor, default is $80
 * @param h height of the cursor
 * @param f flash rate is 60ths of a second.
 */
void gos_defcursor(unsigned char b, unsigned char h, unsigned char f)
{
  B0=b;
  B1=h;
  B2=f;
  gos(36);
}
