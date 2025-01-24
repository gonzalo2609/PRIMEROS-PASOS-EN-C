/*  Hacer un programa en el cual declare dos variables del tipo entero con valores que pueden ir desde 
1 hasta 100. Muestre por pantalla los valores de esas variables y resuelva por medio de una 
función el intercambio de esos valores de la variables mostrando el resultado de ese 
intercambio   */

# include <stdio.h>

int burbuja (int a, int b, int c);
int burbuja (int a, int b, int c)
            {
             	
            	
			}



int main ()
{
	
    int num1, num2 ,aux;	
	puts("INGRESE 2 VALORES DEL 1 AL 100\n");
	
    
	
	do {
		
		
	   	printf("INGRESE EL PRIMER VALOR: ");
	    scanf("%i",&num1);
        printf("INGRESE EL SEGUNDO VALOR: ");
	    scanf("%i",&num2);
	    
	    
		printf("\n\aERROR!!!! DEBE INGRESAR EL NUMERO EN EL RANGO INDICADO..\n");
	
		
       } while (!(num1 < 1 && num1 >100) && (num2 <1 && num2 > 100));
       
	   printf("\n");	
	   printf("EL VALOR DEL PRIMER NUMERO INGRESADO ES: %i\n",num1);
       printf("EL VALOR DEL SEGUNDO NUMERO INGRESADO ES: %i",num2);
       
       puts ("\nEL RESULTADO DEL INTERCAMBIO DE LOS VALORES SON:\n");
       
	   
	   
	   
	   
	   
	   
	   	   	
return 0;	
}
