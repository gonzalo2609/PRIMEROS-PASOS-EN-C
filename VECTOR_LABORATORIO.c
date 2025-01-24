/* UN LABORATORIO NOS CONTACTA PARA HACER UN PROGRAMA EN DONDE SE TIENE QUE CARGAR LAS EDADES
   DE 15 PACIENTES QUE ESTAN EN UN TRATAMIENTO EXPERIMENTAL CON UNA NUEVA VACUNA.
   DE ESTAS EDADES QUE SE CARGAN NOS SOLICITAN EL SIGUIENTE INFORME:
   
   A. EDADES PROMEDIO DE LOS PARTICIPANTES
   B.¿CUANTOS PACIENTES TIENE MAS DE 60 AÑOS?
   C.¿CUANTOS PACIENTES TIENE MENOS DE 18 AÑOS?  */


# include <stdio.h>
main()
{
	int edades[15];
	int i, promedio = 0, menores =0 ,  mayores =0;
	
	for (i = 0; i <15; i++)
	    {
	    	
	     printf("%i) INGRESE SU EDAD: ",i+1);
	     scanf("%i",&edades[i]);
	     
	      promedio =  promedio + edades[i];
	     
	     if (edades[i] < 18)
	        {
	         menores++;	
			}
	     else if (edades[i] > 60)
		        {
	     	     mayores++;
	            }
	    
	     }
	     
	    promedio =  promedio/15;
	    
	    printf("\nLA EDAD PROMEDIO DE LOS PACIENTES ES: %i\n",promedio);
		printf("LOS PACIENTES MENORES DE 18 AÑOS SON: %i\n",menores);	
	    printf("LOS PACIENTES MAYORES DE 60 AÑOS SON: %i\n",mayores);	
	    	
     
	
}


