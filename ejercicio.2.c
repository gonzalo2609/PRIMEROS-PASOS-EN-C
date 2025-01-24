# include <stdio.h>
# include <stdlib.h>

struct registro {
	
	int id;
	char nombre [30];
	float altura;
	
};

void menu();
void menu()
{
  printf("..........BIENVENIDOS AL MENU VIRTUAL........\n");
  printf("(1) INGRESAR DATOS... (2) MOSTRAR... (3) GUARDAR EN UN ARCHIVO...\n");
		
}


void ingresos (struct registro *notas, int a, int *contador);
void ingresos (struct registro *notas, int a, int *contador)
{
	int i;
	for( i = 0; i < a; i++)
	    {
	     printf("\nINGRESE EL REGISTRO %i:\n", i+1);
	     printf("INGRESE EL ID :");
	     scanf("%i", & notas[i].id);	
	     fflush(stdin);
	     
	     printf("INGRESE EL NOMBRE: ");
	     fgets(notas[i].nombre, 30, stdin);
	     
	     printf("INGRESE LA ALTURA: ");
	     scanf("%f", & notas[i].altura);
	     fflush(stdin);
	    	
		}
 
    (*contador) ++;
}

void mostrar (struct registro * notas, int a);
void mostrar (struct registro * notas, int a)
{
	int i;
	for( i = 0; i < a; i++)
	    {
	     printf("\nREGISTRO %i.\n", i+1);
	     
	     printf("ID: %i\n", notas[i].id);
	     printf("NOMBRE: %s\n", notas[i].nombre);
	     printf("ALTURA: %.2f\n", notas[i].altura);
	    	
		}
}


int main()
{
	char opcion;
	int cantidad, contadorRegistro = 0, i;
	struct registro * persona = NULL;
    FILE * archivo;
	
	printf("CUANTAS PERSONAS DESEA INGRESAR EN EL REGISTRO: ");
	scanf("%i", &cantidad);
	fflush(stdin);
	
	persona = (struct registro*) malloc (cantidad * sizeof(struct registro));
	
	if ( persona == NULL || cantidad == 0)
	   {
        printf("ERROR EN LA RESERVA DE MEMORIA..\n");
		 return 1;
	   }
	else{
		 printf("SE RESERVO CON EXITO LA MEMORIA SOLICITADA PARA INGRESAR LOS REGISTROS..\n");
		 system ("pause");

    	}
	
	do{
		system("cls");
	    menu();
	    
	    printf("INGRESE LA OPCION: ");
        scanf("%c", &opcion);
        fflush(stdin);
        
		switch (opcion)
		       {
		       	 case '1':
		       	 	      
		       	 	      if(contadorRegistro == 0)
							 {
							  ingresos (persona, cantidad, &contadorRegistro);	
							 } 
		       	 	      else {
		       	 	      	    printf("\nYA SE CARGARON LOS REGISTROS\n");
							   }     
		       	 break;
		       	
		       	 case '2':
		       	 	      if ( contadorRegistro == 0)
		       	 	          {
		       	 	          	printf("...LISTADO VACIO...\n");
							  }
						  else {
						        mostrar (persona, cantidad); 	
			       	           } 
				break; 
							  
				case '3':
					     archivo = fopen ("muestra.txt", "a");
					     if (archivo == NULL)
					         {
					          printf("NO SE PUDO GENERAR EL ARCHIVO CORRECTAMENTE..\n");
							 }
						 	
						 else {
						 	   printf("EL ARCHIVO SE GUARDO CORRECTAMENTE.\n");
						 	   
							   for (i = 0; i < cantidad; i++)
							       {
							       	fprintf(archivo, "ID: %i NOMBRE: %s ALTURA %.2f\n", persona[i].id, persona[i].nombre, persona[i].altura);
								   }
						      }			     
					     fclose (archivo);    
				break;
						  
		       	 default:
		       	 	     printf("...ERROR EN EL INGRESO...\n"); break;
		    
			   }
			   
		system ("pause");
		system("cls");

	  } while(opcion != '0');
	
	free(persona);
	
	return 0;
}
