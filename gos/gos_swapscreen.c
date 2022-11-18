/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Swaps an area on screen with a block image in memory
 * @param a Address of image data
 * @param x position
 * @param y position
 * @param w width
 * @param h height
 * @param cx clipping X region
 * @param cy clipping Y region
 * @param xo X offset
 * @param yo Y offset
 */
unsigned char gos_swapscreen(unsigned long a,
			     unsigned char x,
			     unsigned char y,
			     unsigned char w,
			     unsigned char h,
			     unsigned char cx,
			     unsigned char cy,
			     unsigned char xo,
			     unsigned char yo)
{
  W0=a & 0xFFFF;
  W1=a >> 16;
  B0=x;
  B1=y;
  B2=h;
  B3=w;
  B4=cx;
  B5=cy;
  B6=xo;
  B7=yo;
  gos(41);
  return B7;
}
