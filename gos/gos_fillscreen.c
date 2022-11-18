/**
 * Diamond GOS Bindings
 *
 * @author  Thomas Cherryhomes
 * @email   thom dot cherryhomes at gmail dot com
 * @license gpl v. 3
 */

#include "gos.h"

/**
 * @brief Fills an area on screen with given bit pattern
 * @param a Address of image data
 * @param p Fill pattern (low byte only)
 * @param x position
 * @param y position
 * @param w width
 * @param h height
 * @param xc Clipping value X
 * @param yc Clipping Value y
 * @param xo X offset
 * @param yo Y offset
 */
unsigned char gos_fillscreen(unsigned long a, unsigned short p, unsigned char x, unsigned char y, unsigned char w, unsigned char h, unsigned char xc, unsigned char yc, unsigned char xo, unsigned char yo)
{
  W0=a&0xFFFF;
  W1=a>>16;
  W2=p;
  B0=x;
  B1=y;
  B2=h;
  B3=w;
  B4=xc;
  B5=yc;
  B6=xo;
  B7=yo;
  gos(55);
  return B7;
}
