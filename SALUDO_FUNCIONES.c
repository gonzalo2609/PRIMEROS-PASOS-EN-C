# include <stdio.h>

void saludo () 

{
  printf("\t\t    ESTE ES UN PRGRAMA QUE PERMITE EL INGRESO DE DOS NUMEROS PARA REALIZAR UNA SUMA.\n");
  printf("\n\t\t                MUESTRA EL RESULTADO Y LUEGO DA UN SALUDO DE DESPEDIDA.\n");
  printf("_______________________________________________________________________________________________________________________\n\n");

}

/*
int suma (int a, int b)
{
 return (a+b);
}
*/


void suma()
{
  int num1, num2,total;
 
  printf("INGRESE EL PRIMER NUMERO:");
  scanf("%i",&num1);
  printf("INGRESE EL SEGUNDO NUMERO:");
  scanf("%i",&num2);
  total = num1 + num2;
  printf("\nEL RESULTADO DE LA SUMA ES: %i\n\n",total);
}

void final()
{
	
  printf("\t\t                          GRACIAS POR UTILIZAR EL PROGRAMA\n");	
  printf("_______________________________________________________________________________________________________________________\n");	
 
}

    //             ----------------------------- COMIENZO DEL MAIN ------------------------------------------------------
int main()
{

	saludo();   // ----------------------------------------------- LLAMADA A LA FUNCION SALUDO
	
	suma();
	
/*	int num1, num2;
 
    printf("INGRESE EL PRIMER NUMERO:");
    scanf("%i",&num1);
    printf("INGRESE EL SEGUNDO NUMERO:");
    scanf("%i",&num2);
  
    printf("\nEL RESULTADO DE LA SUMA ES: %i\n\n",suma(num1,num2)); //----------------------------------- LLAMADA A LA FUNCION SUMA
*/ 			

    final();   // ----------------------------------------------- LLAMADA A LA FUNCION FINAL

	return 0;	
}








