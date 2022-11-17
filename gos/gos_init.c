/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Initialize Diamond with given resolution
 * @param res 0 = Hires, 1 = Lores
 */
void gos_init(unsigned char res)
{
  B0=res;
  gos(0);
}
