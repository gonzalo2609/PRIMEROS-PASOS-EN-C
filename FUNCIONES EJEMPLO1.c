# include <stdio.h>


void suma();
void suma()
{
	
	int num1, num2, resultado;
	
	printf("ingrese numero1:\n");
	scanf("%i", &num1);

    printf("ingrese numero2:\n");
	scanf("%i", &num2);	
	
	resultado = num1+ num2;
	
	printf("LA SUMA ES:%i\n", resultado);
	
}

void pre();


void pre()
{
	
	
	printf("HOLA\n");
}

int main ()
{
int i;
 for (i = 0; i < 3; i++)
     {
     	suma();
	 }
	return 0;
}

