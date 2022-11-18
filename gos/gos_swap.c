/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Swap a block of memory with another.
 * @param a Source address
 * @param b Destination address
 * @param n Number of bytes to swap
 * @return 0xFF if an error occurred.
 */
unsigned char gos_swap(unsigned long a,
		       unsigned long b,
		       unsigned short n)
{
  W0=a&0xFFFF;
  W1=a>>16;
  W2=b&0xFFFF;
  W3=b>>16;
  W4=n;
  gos(33);

  return B7;
}
