#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// ------------------------------------------PROTOTIPOS

//int potencia(int a, int b);
int potencia(int a,int b)
            {
            int resultado;
            resultado = pow (a,b);
            return resultado;
            }
             

// -------------------------------------------FUNCION PRINCIPAL
 int main()

    {
        int num1, num2, resultado;
         	
        printf("INGRESE EL NUM: ");
        scanf("%i",&num1);
             	
        printf("INGRESE EL OTRO NUM: ");
        scanf("%i",&num2);
           	    
        printf("\nEL RESULTADO DE LA POTENCIA DE ESOS NUMEROS INGRESADOS ES: %i",potencia (num1,num2));
    
     return 0;
	}
	
// -----------------------------------------CUERPO DE LA FUNNCION
