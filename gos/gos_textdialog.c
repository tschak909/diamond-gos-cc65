/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Opens an area in dialog box for text entry. This routine will also filter out invalid input.
 * @param maxlen Maximum length (0-255)
 * @param start Starting position of edit cursor (0-255)
 * @param exit Exit conditions (0=only on C/R, 255=when buffer is full)
 * @param x X pos of text area (0-39)
 * @param y Y pos of text area (0-191)
 * @param s pointer to string buffer
 * @param f pointer to character filter
 * @param e pointer to exit filter
 */
void gos_textdialog(unsigned char maxlen,
		    unsigned char start,
		    unsigned char exit,
		    unsigned char x,
		    unsigned char y,
		    void *s,
		    void *f,
		    void *e)
{
  B0=maxlen;
  B1=start;
  B4=exit;
  B5=x;
  B6=y;
  W0=s;
  W1=f;
  W2=e;
  gos(18);
}
