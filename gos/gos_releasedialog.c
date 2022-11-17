/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Terminates usage of the current dialog box.
 */
void gos_releasedialog(void)
{
  gos(17);
}
