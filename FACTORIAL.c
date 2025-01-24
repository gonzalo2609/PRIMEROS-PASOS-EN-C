// PROGRAMA QUE CALCULE EL FACTORIAL DE UN NUMERO ENTERO INGRESADO POR TECLADO

# include <stdio.h>
main()
{
	int num, i, resultado =1 ;
	
    printf("INGRESE UN NUMERO ENTERO PARA CALCULAR SU FACTORIAL:\n");  
	scanf("%i",&num);
    
    for (i =1; i <= num; i++)
        {
         resultado = resultado * i;	
		}
	printf("\nEL FACTORIAL DE %i ES: %i",num,resultado);
}
