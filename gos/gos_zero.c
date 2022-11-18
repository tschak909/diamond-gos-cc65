/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Zero a block of memory
 * @param b Address to zero
 * @param n Number of bytes to zero
 * @return 0xFF if an error occurred.
 */
unsigned char gos_zero(unsigned long b,
		       unsigned short n)
{
  W0=0x2020;
  W1=0x2020;
  W2=b&0xFFFF;
  W3=b>>16;
  W4=n;
  gos(32);

  return B7;
}
