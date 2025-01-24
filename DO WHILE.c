# include <stdio.h>
main()
{
	int num;
	
	do{
		
		printf("INGRESE UN VALOR DEL 0 AL 999 \nEL PROGRAMA FINALIZA SI PRESIONA EL CERO: ");
		scanf("%i",&num);
		fflush(stdin);
		
		if (num >= 1000|| num < 0)
		   {
		   	printf("\aNUMERO FUERA DE RANGO\n");
		   }
		
		else if (num >=100)
		   {
		   	printf("EL NUMERO INGRESADO ES: %i Y TIENE 3 DIGITOS.\n",num);
		   }
		
		else if (num >= 10)
			      {
			      printf("EL NUMERO INGRESADO ES: %i Y TIENE 2 DIGITOS.\n",num);
				  }
				  
		else if (num > 0)
				    {
	 	     	     printf("EL NUMERO INGRESADO ES: %i Y TIENE 1 DIGITO\n",num);
			        }
			   
		printf("\n");
		
	  } while(num != 0);
	
	
	
	
}
