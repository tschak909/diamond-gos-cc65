/**
 * Hello World example
 */

#include <conio.h>
#include <gos.h> 

void main(void)
{
  gos_init(0);
  gos_paraprnt(0,24,319,32,0,0,8,"Hello World!");
  cgetc();
  gos_exit();
}
