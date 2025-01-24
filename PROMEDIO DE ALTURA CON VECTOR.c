/*  DEFINIR UN VECTOR DE 5 COMPONENTES DE TIPO FLOAT QUE REPRESENTEN LA ALTURA
    DE 5 PERSONAS. LUEGO OBTENER EL PROMEDIO DE LAS MISMAS Y MOSTRAR CUANTAS
    PERSONAS SON MAS ALTAS QUE EL PROMEDIO Y CUANTAS BAJAS AL PROMEDIO.*/
    
    
     # include <stdio.h>
     main()
     {
	 
     	int i, mayor = 0, menor = 0;
     	float alturas[5];
        float suma =0 , promedio;
        
        for(i = 0; i < 5; i++)
           {
           	printf("INGRESE LA ALTURA DE LA PERSONA NUMERO %i: ",i+1);
           	scanf("%f",&alturas[i]);
           	
           	suma = suma + alturas[i];
           	promedio = suma/5;
           	
		   }
     	    printf("\n  \t\t\t\t\tEL PROMEDIO DE ALTURA ES: %.2f",promedio);

     	
     	for (i = 0; i < 5; i++)
     	    {
     	    	
     	     if (alturas[i] > promedio)	
     	        {
     	         mayor++;	
				}
			
			else {
				  menor ++;
		         }
     	
			}
     	
     	printf("\nLAS PERSONAS MAYORES AL PROMEDIO SON: %i\n",mayor);
     	printf("LAS PERSONAS MENORES AL PROMEDIO SON: %i",menor);
     	
	 }
