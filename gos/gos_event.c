/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Check the GOS environment to see if any events have occurred. One iteration of event loop.
 */
void gos_event(void)
{
  gos(23);
}
