/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Makes a legal exit to the Diamond GOS desktop.
 */
void gos_execdesktop(void)
{
  gos(48);
}
