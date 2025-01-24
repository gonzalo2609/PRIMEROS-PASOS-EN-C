# include <stdio.h>
main()
{
     int opcion;
     
     do {
     	  printf("ELIJA UNA OPCION\n\n1.HOLA\t2.CHAU\t3.HASTA LUEGO\t0.SALIR\n\n");
          scanf("%i",&opcion);
          printf("\n");
          
          
          //system("cls");
		
     	  switch (opcion)
     	         {
     	         case 1: printf("\nHOLA\n\n");
				   
				   break;
     	       
     	         
     	         case 2: printf("\nCHAU\n\n");
     	         
				   break;
     	       
     	         
     	         case 3: printf("\nHASTA LUEGO\n\n");
     	         
				  break;
     	         
     	         
     	         case 0: printf("ESTA SALIENDO DEL PROGRAMA\n\n"); break;
     	         
     	         default:printf("\n \t\t\t\t\t\aERROR INGRESE UNA OPCION VALIDA\n\n");
     	       
			     break;
     	         }
     	          system ("pause");
                  system("cls");
	    } 
		 while (opcion != 0 );
}

