/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Defines a new mouse shape
 * @param buf pointer to new mouse shape bitmap
 */
void gos_defmouse(void *buf)
{
  W0=(unsigned short)buf;
  gos(13);
}
