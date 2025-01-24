# include <stdio.h>
main()
{
	
	int suma = 0, i = 1, num;
	
	printf("INGRESE 10 VALORES PARA SUMARLOS Y MOSTRAR SU PROMEDIO: \n\n");
	
	while(i <= 10)
	     {
	      printf("INGRESE EL VALOR %i: ",i);
	      scanf("%i",&num);
	      suma = suma + num;
		  i++; 	
		 }
	
	printf("\nLA SUMA DE LOS VALORES INGRESADOS ES:%i",suma);
	suma = suma/10;
	printf("\nEL PROMEDIO ES: %i",suma);	
}
