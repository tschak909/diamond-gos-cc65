/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Creates a simple sub-class of a dialog box, known as a message box. Containing an icon (32x32), a text string, and ewither an OK button or both an OK and cancel button.
 * @param icon pointer to icon image data
 * @param s pointer to text string (terminated by 0xFF)
 * @param t Type of message box (0=OK, 1=OK and Cancel)
 * @return 0=OK, 1=Cancel
*/
unsigned char gos_messagebox(void *icon, char *s, unsigned char t)
{
  W0=(unsigned short)&icon;
  W1=(unsigned short)&s;
  B0=t;
  gos(57);
  return B0;
}
