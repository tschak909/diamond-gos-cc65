/**
 * Create a single window.
 */

#include <gos.h>

void main(void)
{
  gos_init(0);
  gos_windopen(0,
	       0,8,
	       15,64,
	       0,
	       "Hello World\xFF",
	       "\xFF",
	       0,0,0);

  while (1)
    {
      gos_event();

      if ( EVENT[0] == 2 ) // window
	{
	  if ( EVENT[1] == 1 ) // closed
	    {
	      gos_windclose();
	      break;
	    }
	}
    }

  gos_exit();
}
