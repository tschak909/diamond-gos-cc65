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
 * @return demoninator in lower 16 bits, remainder in upper 16 bits.
 */
unsigned long gos_divide(unsigned short a, unsigned short b)
{
  unsigned long r;
  
  W4=a;
  W5=b;
  gos(40);

  r  = W6 & 0xFFFF;
  r |= (long)(W7 << 16);
  
  return r;
}
