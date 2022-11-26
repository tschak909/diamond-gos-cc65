/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Insert or remove a check from a menu item (can also place characters other than checks next to menu items)
 * @param menu_number (0-7)
 * @param menu_item (1-22)
 * @param c character to insert (0=Blank, 8=Check)
 */
void gos_menucheck(unsigned char menu_number, unsigned char menu_item, unsigned char c)
{
  B0=menu_number;
  B1=menu_item;
  B2=c;
  gos(9);
}
