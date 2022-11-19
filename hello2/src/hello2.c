/**
 * Create a single window
 */

#include <gos.h>

void main(void)
{
  gos_init(0);
  gos_windopen(SIZER|HORIZONTAL|VERTICAL|DRAG|FULLER,
	       0,8,
	       39,183,
	       0,
	       "Hello World\xFF",
	       "CC65 Bindings\xFF",
	       0,0,0);

  while (1)
    {
      gos_event();

      if ( EVENTTYPE == 2 ) // window
	{
	  if ( EVENTTYPE2 == 1 ) // closed
	    {
	      gos_windclose();
	      break;
	    }
	}
    }

  gos_exit();
}
