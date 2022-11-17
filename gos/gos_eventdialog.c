/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Waits for an event to occur in a Dialog Box, blocks.
 * @return 16-bit value where mm|tt mm = # of mouse clicks, tt = touch area affected.
 */
unsigned short gos_eventdialog(void)
{
  unsigned short r;

  gos(16);
  r  =  B0;
  r |= (B1 << 8);

  return r;
}
