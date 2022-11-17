/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Removes an icon that has been installed
 * @param icon_num Icon # (0-31)
 */
void gos_removeicon(unsigned char icon_num)
{
  B0=icon_num;
  gos(6);
}
