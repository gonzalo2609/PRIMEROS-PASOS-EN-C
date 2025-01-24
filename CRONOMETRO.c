// CRONOMETRO AGREGANDO LA LIBRERIA WINDOWS PARA UTILIZAR LA FUNCION SLEEP


# include <stdio.h>
# include <windows.h>
main ()
{
	
     int hora, min, seg, x;
	 x = 1000;
	 
	 for (hora = 0; hora < 24; hora++)
	      {
	       for (min = 0; min < 60; min++)
	           {
	       	for (seg = 0; seg < 60; seg++)
	       	    {
	       	     printf("%i:%i:%i\n",hora,min,seg);	 
				 Sleep(x);     	     
				}      	      	
		       }    	
		  }	
		  	
}

