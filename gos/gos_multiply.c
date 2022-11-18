/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Word sized multiply
 * @param a multiplicand 1
 * @param b multiplicand 2
 */
unsigned short gos_multiply(unsigned short a, unsigned short b)
{
  W5=a;
  W6=b;
  gos(39);
  return W7;
}
