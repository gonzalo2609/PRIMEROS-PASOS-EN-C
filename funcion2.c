# include <stdio.h>

int suma (int a, int b)
         {
          return (a+b);	
		 }


int producto (int a, int b)
         {
          return (a*b);	
		 }		 
		 

// ---------------------------------------------------------------FUNCION PRINCIPAL 
int main ()
{
 int num1, num2;
 	
 printf("INGRESE UN NUMERO: ");	
 scanf("%i",&num1);
  printf("INGRESE OTRO NUMERO: ");
 scanf("%i",&num2);
 
  printf("\nEL RESULTADO DE LA SUMA ES: %i ",suma (num1,num2));	
  printf("\nEL RESULTADO DE LA MULTIPLICACION ES: %i ",producto (num1,num2));		
	
return 0;
}
