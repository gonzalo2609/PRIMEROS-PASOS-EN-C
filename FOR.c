/* INGRESAR 8 VALORES POR TECLADO Y A PARTIR DE ESTO SACAR EL PROMEDIO GENERAL,
   SACAR EL PROMEDIO DE LOS VALORES PARES Y EL PROMEDIO DE LOS VALORES IMPARES.
   LUEGO MOSTRAR POR PANTALLA CUANTOS NUMEROS SUPERARON EL VALOR DE 15 */

# include <stdio.h>
main()
{
    int i, num = 0, par = 0, impar =0, promedio, prom1=0, prom2=0;	

	printf("\t\t\t\t\t    INGRESE 8 VALORES NUMERICOS \n");
	
	
	
	
	
	
 	for (i = 1; i <=8; i++)
        {
         printf("INGRESE EL VALOR NUMERO %i: ",i);
         scanf("%i",&num);
         promedio = promedio + num;
          if (num %2 == 0)
             {
              par = num +par;
              prom1++;
			 }
         
          else {
          	   impar = num +impar; 
          	   prom2++;
		       }
		}
		
		 par = par/prom1;
		 impar = impar/prom2;
	     promedio = promedio/8;
	     printf("\nEL PROMEDIO DE LOS NUMEROS INGRESADOS ES:%i",promedio);
	     printf("\nEL PROMEDIO DE LOS NUMEROS PARES ES:%i",par);
	     printf("\nEL PROMEDIO DE LOS NUMEROS IMPARES ES:%i",impar);
	       
	
}
