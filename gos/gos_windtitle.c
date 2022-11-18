/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief redraws window title
 * @param c Fill character (0=blank, 10=shaded)
 */
void gos_windtitle(unsigned short c)
{
  W7=c;
  gos(51);
}
