/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Loads (and executes) a binary file.
 * @param d Disable flag (0=diamond app, 1=disable diamond)
 * @param s pointer to EOL terminated filename
 */
void gos_binload(unsigned char d, void *s)
{
  B0=d;
  W0=(unsigned short)s;
  gos(53);
}
