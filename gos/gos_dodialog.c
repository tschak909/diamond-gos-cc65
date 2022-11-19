/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Creates a dialog box.
 * @param w Width of Dialog Box (0-39)
 * @param h Height of dialog box (0-191)
 * @param objects Pointer to object list
 * @param areas Pointer to touch areas
 */
void gos_dodialog(unsigned char w, unsigned char h, void *objects, void *areas)
{
  B0=w;
  B1=h;
  W0=(unsigned short)objects;
  W1=(unsigned short)areas;
  gos(14);
}
