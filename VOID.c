/*  SOLICITAMOS EL INGRESO DE DOS VALORESS ENTEROS Y MUESTRA LA SUMA DE ESOS VALORES.
    MOSTRAMOS UNA LINEA SEPARADORA DESPUES DE CADA OPERACION.
    Y REPETIMOS LA OPERACION VARIAS VECES. */
    
# include <stdio.h>

void operacion ()
{
  int x, y, suma;
  printf("INGRESE EL PRIMER VALOR:");	
  scanf("%i",&x);
  printf("INGRESE EL SEGUNDO VALOR:");
  scanf("%i",&y);
	
  suma = x + y;
   printf("\nEL RESULTADO DE LA SUMA ES: %i\n\n",suma);
}

void separacion ()
    {
     printf("________________________________________________________________________________________________________________________\n\n");	
	}


int main()
{   
    char ingreso;
  
    
    do{
    	
      operacion ();
      separacion();
      
      printf("DESEA SEGUIR HACIENDO LA OPERACION? ");
       printf("INGRESE LA LETRA N PARA SALIR\n\n");
      scanf(" %c",&ingreso);
	  }
	  while(ingreso != 'n' && ingreso != 'N');
 


}
