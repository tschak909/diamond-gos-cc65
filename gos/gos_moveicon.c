/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Move an existing icon to another position on screen
 * @param icon_num Icon number (0-31)
 * @param x New X position (0-39)
 * @param y New Y position (0-191)
 */
void gos_moveicon(unsigned char icon_num, unsigned char x, unsigned char y)
{
  B0=icon_num ;
  B1=x;
  B2=y;
  gos(5);
}
