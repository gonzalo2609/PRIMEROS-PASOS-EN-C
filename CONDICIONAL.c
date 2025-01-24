# include <stdio.h>
main()
{
	
	int suma = 0, num;
	printf("INGRESE LA CANTIDAD DE NUMEROS QUE QUIERE SUMAR:");
	scanf("%i",&num);
	
	int i = 1;
	
	while (i <= num)
	      {
	      	suma = suma + i;
	      	printf("\nEL RESULTADO DE LA SUMA ES: %i",suma);
	      	i++;
		  }
          

}



