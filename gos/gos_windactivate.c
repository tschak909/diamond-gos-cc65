/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Sets a new actual width/height for the top window.
 * @param w Window number (0-3)
 */
void gos_windactivate(unsigned short w)
{
  B0=w;
  gos(52);
}
