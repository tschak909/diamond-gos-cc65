/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Invert a touch area in a dialog box
 * @param touch_area (touch area number)
 */
void gos_inverttouch(unsigned char touch_area)
{
  B0=touch_area;
  gos(49);
}
