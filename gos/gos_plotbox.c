/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Plots a box on the screen
 * @param x1 Beginning X position (0-39)
 * @param y1 Beginning Y position (0-191)
 * @param x2 Ending X position (0-39)
 * @param y2 Ending Y position (0-191)
 * @param c Color (0-3)
 * @param m Mode (0=normal, 1=XOR)
 */
void gos_plotbox(unsigned char x1,
		  unsigned char y1,
		  unsigned char x2,
		  unsigned char y2,
		  unsigned char c,
		  unsigned char m)
{
  B0=x1;
  B1=y1;
  B2=x2;
  B3=y2;
  B4=c;
  B5=m;
  gos(26);
}
