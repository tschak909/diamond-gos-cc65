/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Changes the shape of an existing icon (used to animate
 *        icons e.g. the disk drives on Diamond DeskTop)
 * @param icon_num icon Number (0-31)
 * @param buf Pointer to bitmap buffer.
 */
void gos_shapeicon(unsigned char icon_num,
		   void *buf)
{
  B0=icon_num;
  W0=buf;
  gos(7);
}
