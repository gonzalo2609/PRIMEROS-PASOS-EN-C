/* REALIZAR UN PROGRAMA  EN DONDE SE PASEN DOS VALORES ENTEROS,
   UNO COMO DIVISOR Y OTRO COMO DIVIDENDO. EL PROGRAMA DEBE 
   RESOLVER EL COCIENTE Y EL RESTO DE LA DIVISION, UTILIZAR PUNTEROS.*/
   
 /*  
 
# include <stdio.h>

void operacion (int *num1, int  *num2, int *cociente, int *resto)
{
	 
	*cociente = (*num1/ *num2);
	*resto = (*num1% *num2);
	 
}

int main ()
{
	int a, b, cociente, resto;
     
    printf("INGRESE EL PRIMER NUMERO: ");
	scanf("%i", &a);
	
	do {
		printf("\nEL SEGUNDO NUMERO NO DEBE SER IGUAL, DEBE SER MENOR AL PRIMER NUMERO Y TAMPOCO SER CERO.\n");
		printf("INGRESE EL SEGUNDO VALOR: ");
     	scanf("%i", &b);
     	
     	// system("cls");
		
       } while (b >= a || b == 0);
     
    operacion (&a, &b, &cociente, &resto);
 
  	printf("\nEL COCIENTE DE LA DIVISION ES: %i\n",cociente);
	printf("EL RESTO DE LA DIVISION ES: %i",resto);
	
	return 0;
} 
*/


# include <stdio.h>

void ingreso (int *a, int *b);
void operacion (int *a, int  *b, int *cociente, int *resto);


void ingreso (int *a, int *b)
{
	printf("INGRESE EL PRIMER NUMERO: ");
	scanf("%i", &a);
	
	do {
		printf("\nEL SEGUNDO NUMERO NO DEBE SER IGUAL, DEBE SER MENOR AL PRIMER NUMERO Y TAMPOCO SER CERO.\n");
		printf("INGRESE EL SEGUNDO VALOR: ");
     	scanf("%i", &b);
     	
     	// system("cls");
		
       } while (b >= a || b == 0);
       
       printf("EL VALOR DE A ES: %i\n",a);
       printf("EL VALOR DE b ES: %i\n",b);
	 
}

void operacion (int *a, int  *b, int *cociente, int *resto)
{
	 
	*cociente = (*a/ *b);
	*resto = (*a% *b);
}


int main ()
{
 int a, b, cociente, resto;
 

	ingreso (&a, &b);
	printf("\n");
	printf("EL VALOR DE A ES: %i\n",a);
	printf("EL VALOR DE b ES: %i\n",b);
	 
	
	operacion(&a, &b, &cociente, &resto);

	
  	printf("\nEL COCIENTE DE LA DIVISION ES: %i\n",cociente);
	printf("EL RESTO DE LA DIVISION ES: %i",resto);
     
	
	return 0;
} 




