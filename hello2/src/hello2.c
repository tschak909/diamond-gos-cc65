/**
 * Create a single window
 */

#include <gos.h>

void main(void)
{
  gos_init(0);
  gos_windopen(ADD_SIZER|ADD_HORIZONTAL|ADD_VERTICAL|ADD_DRAG|ADD_FULLER,
	       0,8,
	       39,183,
	       0,
	       "Hello World\xFF",
	       "CC65 Bindings\xFF",
	       0,0,0);

  while (1)
    {
      gos_event();

      if ( EVENTTYPE == WINDOW ) // window
	{
	  if ( EVENT.Window.type == CLOSER ) // closed
	    {
	      gos_windclose();
	      break;
	    }
	}
    }

  gos_exit();
}
