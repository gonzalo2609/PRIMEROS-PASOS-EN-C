# include <stdio.h>
#include <string.h>

void genero (char op)
{
	
	if (op == 'h' || op == 'H')
	   {
	   	printf("ES HOMBRE\n");
	   }
	else 
	    if (op == 'm' || op == 'M')
	   {
	   	printf("ES MUJER\n");
	   }
	else {
		 	printf("\aINGRESO INCORRECTO\n");
         }
	
	
}



int main ()
{
	char opcion;
	
	
	while (opcion != 'S' && opcion !='s')
	      {
	       	printf("\nINGRESE LA LETRA [ 'M' o 'H'] PARA MOSTRAR SU GENERO: PULSE 'S' PARA SALIR:");
            scanf(" %c",&opcion);
            
	      genero (opcion);
		  }
       
	
	
	return 0;
}
