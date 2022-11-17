/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Enable or disable a menu item.
 * @param menu_number (0-7)
 * @param menu_item (1-22)
 * @param e 0=enable 1=disable
 */
void gos_menuenable(unsigned char menu_number, unsigned char menu_item, unsigned char e)
{
  B0=menu_number;
  B1=menu_item;
  B2=e;
  gos(10);
}
