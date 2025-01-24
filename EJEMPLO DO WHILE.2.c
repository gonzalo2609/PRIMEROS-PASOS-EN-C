//PROGRAMA DONDE SE INGRESA 2 NUMEROS Y MUESTRA LOS NUMEROS COMPRENDIDOS ENTRE ESOS 2 NUMEROS INGRESADOS

/*#include <stdio.h>
main ()
{
	 int num1, num2, i;
	 
	 printf("INGRESE UN NUMERO:\n");
	 scanf("%i",&num1);
	 
	 do {
	 	 printf("\nINGRESE OTRO NUMERO MAYOR AL ANTERIOR:\n\n");	 	
	 	 scanf("%i",&num2);
	    }
	     while (num2 <= num1);
	
	    printf("\n");
	    
	 for(i =num1+1 ; i < num2; i++)
	    {
	     printf("%i\t", i);
		}
	
}*/


#include <stdio.h>
main()
{
	
int i;

int num;

do {  

    printf("\n\nINGRESE UN NUMERO ENTERO O PRESIONE EL NUMERO CERO PARA TERMINAR\n");	
scanf("%i", &num);
 fflush (stdin);

	for (i = num+1; i <= num + 10; i++)
	    {
	     printf("%i ", i);
		}
		
    i++;
        
   } 
	while (num != 0); 
	
}
	
	
	

