/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Inverts an area on screen
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
unsigned char gos_invertscreen(unsigned char x,
			      unsigned char y,
			      unsigned char w,
			      unsigned char h,
			      unsigned char cx,
			      unsigned char cy,
			      unsigned char xo,
			      unsigned char yo)
{
  W0=0x2020;
  W1=0x2020;
  B0=x;
  B1=y;
  B2=h;
  B3=w;
  B4=cx;
  B5=cy;
  B6=xo;
  B7=yo;
  gos(30);
  
  return B7;
}
