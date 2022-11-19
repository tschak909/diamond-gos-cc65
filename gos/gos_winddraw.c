/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Draws objects in a window, and updates the window subtitle.
 * @param objects Pointer to object tree
 */
void gos_winddraw(void *objects)
{
  W7=(unsigned short)objects;
  gos(22);
}
