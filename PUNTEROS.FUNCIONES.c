/*# include <stdio.h>

void cargar (int *valor1, int *valor2)
{
	printf("INGRESE UN  NUMERO:");
	scanf("%i", &valor1);
	
	printf("INGRESE OTRO  NUMERO:");
	scanf("%i", &valor2);
	
	printf("\nEL VALOR DEL PRIMER NUMERO INGRESADO ES:%i", valor1);
	printf("\nEL VALOR DEL SEGUNDO NUMERO INGRESADO ES:%i", valor2);
}


int main()
{
	int num1, num2;
	
	cargar (&num1, &num2);

    return 0;
	
} */



# include <stdio.h>

void ingreso (int *num1, int *num2)
{
	printf("INGRESE UN  NUMERO:");
	scanf("%i", &*num1);
	
	printf("INGRESE OTRO  NUMERO:");
	scanf("%i", &*num2);
	
	system ("pause");
}


 void mostrar (int *num1, int *num2)
{

    printf("\nEL VALOR DEL PRIMER NUMERO INGRESADO ES:%i", *num1);
	printf("\nEL VALOR DEL SEGUNDO NUMERO INGRESADO ES:%i",*num2);
	printf("\n");

}


int main()

{
	
	int num1, num2;
	
	ingreso(&num1,&num2);
	mostrar (&num1,&num2);
	
	system ("pause");
	return 0;
    
}
























