/* IMPLEMENTAR UNA FUNCIÓN QUE INTERCAMBIE EL CONTENIDO DE DOS VARIABLES ENTERAS,
   UTILIZAR PUNTEROS PARA SOLUCIONARLO*/

# include <stdio.h>
void intercambio ( int * valor1, int * valor2);
void intercambio ( int * valor1, int * valor2)

{	
	int aux;
	
	aux = *valor1;
	*valor1 = *valor2;
	*valor2 = aux;
	
	printf("\nEL VALOR INTERCAMBIADO DEL PRIMER NUMERO INGRESADO ES: %i\n", *valor1);
	printf("EL VALOR INTERCAMBIADO DEL SEGUNDO NUMERO INGRESADO ES: %i", *valor2);
	
}

int main()
{
	int num1, num2;
	
	printf("INGRESE DOS NUMEROS ASI LUEGO SE MUESTRA EL INTERCAMBIO ENTRE ESOS DOS NUMEROS.\n");
	
	printf("\nINGRESE EL PRIMER NUMERO: ");
	scanf("%i",&num1);
	
	printf("INGRESE EL SEGUNDO NUMERO: ");
	scanf("%i",&num2);
	
	printf("\nEL VALOR ACTUAL DEL PRIMER NUMERO INGRESADO ES: %i\n", num1);	
	printf("EL VALOR ACTUAL DEL SEGUNDO NUMERO INGRESADO ES: %i", num2);	
	printf("\n----------------------------------------------------------------\n");
	
	intercambio (&num1, &num2);
	
}
