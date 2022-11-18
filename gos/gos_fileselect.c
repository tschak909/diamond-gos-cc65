/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Call our file selector routine allowing the user to select a file and have that returned to the calling program.
 * @param ext pointer to extender to match files for (EOL terminated)
 * @param def pointer to default filename (EOL terminated)
 * @param title pointer to title string for dialog (0xFF terminated)
 * @param filename pointer to filename buffer
 * @param directory pointer to directory to open
 * @return pointer to filename
 */
char* gos_fileselect(char *ext, char *def, char *title, char *filename, char *directory)
{
  W0=(unsigned short)&ext;
  W1=(unsigned short)&def;
  W2=(unsigned short)&title;
  W3=(unsigned short)&filename;
  W4=(unsigned short)&directory;
  gos(56);
  return (char *)W3;
}
