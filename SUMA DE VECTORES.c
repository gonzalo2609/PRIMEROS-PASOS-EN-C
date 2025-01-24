/* REALIZAR UN PROGRAMA QUE PIDA LA CARGA DE DOS VECTORES NUMERICOS DE 4 ELEMENTOS.
   OBTENER LA SUMA DE LOS DOS VECTORES Y DICHO RESULTADO GUARGARLO EN UN TERCER 
   VECTOR DEL MISMO TAMAÑO. SUMAR COMPONENTE A COMPONENTE. */
   
 /*  #include <stdio.h>
   main ()
   {
   	
   	 int vector1[4], vector2[4], vector3[4];
   	 int i, suma, total;

   	for (i = 0; i < 4; i++)
   	    {
   	     printf("INGRESE EL VALOR NUMERO %i A SUMAR: ",i+1);	
   	     scanf("%i",&vector1[i]);
		}
		
		printf("\n");
	for (i = 0; i < 4; i++)
   	    {
   	     printf("INGRESE EL OTRO VALOR NUMERO %i A SUMAR: ",i+1);	
   	     scanf("%i",&vector2[i]);	
		}	
   	    
   	for (i = 0; i < 4; i++)
   	    {
   	     vector3[i]= vector1[i] + vector2[i];	
		}
   	
    	    
   	for (i = 0; i < 4; i++)
   	    {
   	     printf("\nEL RESULTADO DE LA SUMA DE LOS NUMEROS INGRESADOS EN LOS DOS PRIMEROS VECTORES EN LA POSICION %i ES: %i", i+1,vector3[i]);
		}
		  
   } */
   
     #include <stdio.h>
   main ()
   {
   	
   	 int vector1[4], vector2[4], vector3[4];
   	 int i, suma, total;

   	for (i = 0; i < 4; i++)
   	    {
   	     printf("  INGRESE EL VALOR NUMERO %i A SUMAR: ",i+1);	
   	     scanf("%i",&vector1[i]);
   	     
   	     printf("INGRESE OTRO VALOR NUMERO %i A SUMAR: ",i+1);	
   	     scanf("%i",&vector2[i]);
   	     
   	     printf("\n");
   	     
   	     vector3[i]= vector1[i] + vector2[i];	   
		}
	   
   	for (i = 0; i < 4; i++)
   	    {
   	     printf("\nEL RESULTADO DE LA SUMA EN LA POSICION %i ES: %i", i+1,vector3[i]);
		}
  
   }
   
   
   
   
   
   
