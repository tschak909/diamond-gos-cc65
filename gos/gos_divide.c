/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Word sized divide
 * @param a numerator
 * @param b denominator
 * @return denominator in d, remainder in r
 */
void gos_divide(unsigned short a, unsigned short b, unsigned short *res, unsigned short *rem)
{
  W4=a;
  W5=b;
  gos(40);
  *res=W6;
  *rem=W7;
}
