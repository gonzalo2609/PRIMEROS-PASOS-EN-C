# include <stdio.h>


// ------------------------------------PROTOTIPOS

void cuadrado();

void cuadrado()
    {
      int num, valor;
	  printf("INGRESE UN VALOR PARA MOSTRAR SU CUADRADO: ");
	  scanf("%i",&num);
	   valor = num * num;
	   printf("\nEL CUADRADO DEL NUMERO INGRESADO ES: %i",valor);
	 // printf("\nEL CUADRADO DEL NUMERO INGRESADO ES: %i\n",(num * num));
	  	  	  
	}	



void producto();
void producto()
     {
      int num1, num2;
       printf("\nINGRESE OTRO VALOR PARA MULTIPLICAR CON OTRO VALOR: ");
       scanf("%i", &num1);
       printf("INGRESE EL OTRO VALOR: ");
       scanf("%i", &num2);
       printf("\nEL PRODUCTO DE LOS NUMEROS INGRESADO ES: %i",(num1 * num2));
       
	 }

//------------------------------------ FUNCION PRINCIPAL MAIN

int main ()
{
	int i;
	
	for(i= 0; i <3; i++)
	
     {
	    cuadrado();
        printf("------------------------------------------------------------------------------------------------------------------------");
        producto();	
     }
	   
    
	
	

return 0;
}


//------------------------------------- CUERPOS DE LAS FUNCIONES
	


	 
	 
