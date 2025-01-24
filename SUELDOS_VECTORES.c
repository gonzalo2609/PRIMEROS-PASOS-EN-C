/* SUELDOS DE EMPLEADOS DE 2 TURNOS Y SACAMOS EL PROMEDIO DE LOS DOS TURNOS */

#include <stdio.h>
main()
{
	int i, j;
	float turno1[4];
	float turno2[4];
	float promedio1, promedio2;
	float suma1 = 0, suma2 = 0;
	for( i = 0; i < 4; i++)
	   {
	   	printf("INGRESE EL SUELDO DEL EMPLEADO NUMERO %i DEL PRIMER TURNO: ",i+1);	   	
	   	scanf("%f",&turno1[i]);
	   	suma1 = suma1 + turno1[i];
	   }
	    
	    printf("\n");
		for( j = 0; j < 4; j++)
	   {
	   	printf("INGRESE EL SUELDO DEL EMPLEADO NUMERO %i DEL SEGUNDO TURNO: ",j+1);	   	
	   	scanf("%f",&turno2[j]);
	   	suma2= suma2 + turno2[j];
	   }
	   
	printf("\n\nTOTAL DE GASTOS EN SUELDOS DEL PRIMER TURNO ES: %.2f\n",suma1);
    printf("TOTAL DE GASTOS EN SUELDOS DEL SEGUNDO TURNO ES: %.2f",suma2);
	
	
	
/*	promedio1 = suma1 / 4;
	promedio2 = suma2 / 4;
	
	printf("\n\nEL PROMEDIO DE LOS SUELDOS DEL PRIMER TURNO ES: %.2f\n",promedio1);
    printf("EL PROMEDIO DE LOS SUELDOS DEL SEGUNDO TURNO ES: %.2f",promedio2);
*/    
    
}



