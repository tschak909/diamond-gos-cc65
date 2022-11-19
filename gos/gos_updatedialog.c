/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Updates dialog box with changes in the object list.
 * @param objects Pointer to object list
 */
void gos_updatedialog(void *objects)
{
  W7=(unsigned short)objects;
  gos(15);
}
