/*
 AL FINAL DEL DIA LABORAL, SE PIDE INGRESAR LAS VENTAS REALIZADAS SOBRE
UN PRODUCTO EN PARTICULAR, POR LOS DISTINTOS VENDEDORES PARA CALCULAR 
EL PROMEDIO DE VENTAS POR HORA DEL PRODUCTO.
DEBEN INGRESAR EL CODIGO DEL VENDEDOR Y LAS VENTAS QUE REALIZO EN EL DIA
TENGA EN CUENTA QUE PUEDE DARSE EL CASO QUE EN EL DIA "NO" SE VENDA NINGUN
PRODUCTO. TENGA EN CUENTA QUE LA JORNADA LABORAL ES DE 8 HORAS.
INFORMAR EL PROMEDIO DE VENTA POR HORA. */





# include <stdio.h>
main ()
{
	
	char ingreso;
	int codigo;
	float venta = 0, totalventa, promedio = 0;
	
	printf("SE REALIZARON VENTAS EN EL DIA??\n(S) SI SE REALIZARON VENTAS  (N) SI NO SE REALIZARON VENTAS:");
	scanf("%c",&ingreso);

	while ( ingreso == 'S' || ingreso == 's')
	      {
	      	
	      	printf("\nINGRESE EL CODIGO DEL VENDEDOR (DEBE SER CON NUMEROS UNICAMENTE):");
	      	scanf("%i",&codigo);
	        
	        printf("\nINGRESE EL MONTO DE LA VENTA:");
	        scanf("%f",&venta);
         	totalventa = totalventa + venta;  
			   
			fflush(stdin);
			printf("\n DESEA INGRESAR MAS VENTAS?"); 
			scanf("%c",&ingreso);   
			  	
		  }
		  
		  
		  if (totalventa !=0)
	         {
	          promedio = totalventa / 8;
	          printf("\nEL PROMEDIO DE VENTAS ES:%.2f",promedio);	
	         	
			 }
	    
	       else{
	       	   		printf("\nNO SE REALIZARON VENTAS"); 
	       	   
		   }
	
	
	
	
	
}
