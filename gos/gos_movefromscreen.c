/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Moves a block image from screen into memory
 * @param a Address of image data
 * @param x position
 * @param y position
 * @param w width
 * @param h height 
 * @param cx Clipping value X
 * @param cy Clipping value Y
 * @param xo X offset
 * @param yo Y offset
 * @return $FF means error occurred.
 */
unsigned char gos_movefromscreen(unsigned long a,
				 unsigned char x,
				 unsigned char y,
				 unsigned char w,
				 unsigned char h,
				 unsigned char cx,
				 unsigned char cy,
				 unsigned char xo,
				 unsigned char yo)
{
  W0=a&0xFFFF;
  W1=a >> 16;
  B0=x;
  B1=y;
  B2=h;
  B3=w;
  B4=cx;
  B5=cy;
  B6=xo;
  B7=yo;
  gos(28);
  
  return B7;
}
