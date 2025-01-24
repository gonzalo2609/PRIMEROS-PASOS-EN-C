// PROGRAMA QUE HACE LA SUCESION DE FIBONACCI HASTA EL TERMINO N INTRODUCIDO POR TECLADO

# include <stdio.h>
main()
    {
     int num1 = 0, num2 = 1, i= 0, res = 0, ingreso;	
     
     printf("INGRESE UN NUMERO PARA HACER LA SUCESION DE FIBONACCI:\n");
     scanf("%i",&ingreso);
     printf("0  1\t");
	 for(i =3; i <= ingreso; i++)
	     {
	      res = num1 + num2;
	      printf("%i\t",res);
	      num1 = num2;
		  num2 = res;	
	      	
		 }
		
	}
