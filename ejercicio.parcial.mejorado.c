# include <stdio.h>
#include <stdlib.h>

//---------------------------------------------------------------------ESTRUCTURA REGISTRO

struct registros {
	
	int id;
	char nombre [30];
	char apellido [30];
	float altura;
};
//----------------------------------------------------------------------------------------

void menu();           // PROTOTIPO DE LA FUNCION MENU                                       
void menu()            // CUERPO DE LA FUNCION MENU
{
	printf("\t\t\t\t.....BIENVENIDOS AL MENU VIRTUAL.....\n");
	printf("(1) INGRESAR DATOS.\n");
	printf("(2) MOSTRAR LOS REGISTROS.\n");
	printf("(3) GUARDAR EN UN ARCHIVO.\n");
	printf("(0) SALIR.\n");
}
//----------------------------------------------------------------------------------------

void carga( struct registros * registro, int a, int * contador);  // 	PROTOTIPO DE LA FUNCION CARGA
void carga( struct registros * registro, int a, int *contador)    //    CUERPO DE LA FUNCION CARGA
{
	int i;
	for (i = 0; i < a; i++)
	    {
	    printf("\nINGRESE EL REGISTRO NUMERO: %i\n", i+1);
	    printf("INGRESE EL ID: ");
	    scanf("%i", & registro[i].id);
        fflush(stdin);	
					   
	    printf("INGRESE EL NOMBRE: ");
	    scanf("%s", &registro[i].nombre);
	    fflush(stdin);
					   
	    printf("INGRESE EL APELLIDO: ");
	    scanf("%s", &registro[i].apellido);
	    fflush(stdin);
					   
	    printf("INGRESE LA ALTURA: ");
	    scanf("%f", &registro[i].altura);
	    fflush(stdin);	
	
	    (*contador) ++;	  					  
	    }		  
}
//----------------------------------------------------------------------------------------


void mostrar ( struct registros * registro, int a); // 	PROTOTIPO DE LA FUNCION MOSTRAR
void mostrar ( struct registros * registro, int a)  //  CUERPO DE LA FUNCION MOSTRAR
{
	
	int i;
	float mayor = registro[0].altura;
	int indiceAltura = 0;
	
	for (i = 0; i < a; i++)
	    {
	     printf("\nREGISTRO %i\n", i+1);
	     printf("ID: %i\n",registro[i].id);
	     printf("NOMBRE: %s\n", registro[i].nombre);
	     printf("APELLIDO: %s\n", registro[i].apellido);
	     printf("ALTURA: %.2f\n", registro[i].altura);
	     
	     
	     if (registro[i].altura > mayor)
	        {
	         mayor = registro[i].altura;
	         indiceAltura = i;
			}
		}

    printf("\nREGISTRO DE LA PERSONA CON LA MAYOR ALTURA: \n");
    
    printf("ID: %i\n",registro[indiceAltura].id);
	printf("NOMBRE: %s\n", registro[indiceAltura].nombre);
	printf("APELLIDO: %s\n", registro[indiceAltura].apellido);
	printf("ALTURA: %.2f\n", registro[indiceAltura].altura);
}
//----------------------------------------------------------------------------------------


int main()   //----------------------------- FUNCION PRINCIPAL MAIN-----------------------
{
	int cantidad, opcion, contadorRegistro = 0, i;
	struct registros * ingresos = NULL;
	FILE * archivo; 

	printf("CUANTAS PERSONAS DESEA INGRESAR: ");
	scanf("%i", &cantidad); 
	ingresos = (struct registros*) malloc (cantidad * sizeof(struct registros));
	
	
	if (ingresos == NULL || cantidad == 0)
	   {
	   	 printf("ERROR EN LA RESERVA DE MEMORIA...\n");
	   	 return 1;
	   }
	   
	else {
		  printf("\n.....LA RESERVA DE MEMORIA SE REALIZO CON EXITO.....\n"); 
	     }
	      system ("pause");
		 
	do{
	     system ("cls"); 
		 menu();
		 printf("INGRESE LA OPCION: ");
		 scanf("%i", &opcion);
		  
		 switch(opcion)
		       {
		       	case 1:
		       		   system ("cls"); 
		       		   if (contadorRegistro == 0)
		       		       {
		       		       	carga(ingresos, cantidad, &contadorRegistro); // LLAMAMOS A LA FUNCION DE TIPO VOID LLAMADA CARGA 
						   }
						   
                       else{
                       	    printf("\nYA SE CARGARON LOS REGISTROS\n");
					       }
							 
				break;
			 
			    case 2:
			    	if (contadorRegistro == 0)
			    	    {
			    	       printf("\n...LISTADO VACIO...\n");
						}
						
					else{
						  printf("LA DATOS DE LOS REGISTROS ALMACENADOS SON\n");
						  mostrar (ingresos, cantidad);                           // LLAMAMOS A LA FUNCION DE TIPO VOID LLAMADA MOSTRAR 
					    }	    
			    break;
			    
			    case 3:
			    	   archivo = fopen ("guardar.txt", "a");
			    	   if ( archivo != NULL)
			    	      {
			    	      	printf("EL ARCHIVO SE GUARDO CON EXITO..\n");
			    	      	
			    	      	for (i = 0; i < cantidad; i++)
			    	      	    {
			    	      	     fprintf(archivo,"%i %s % s %.2f", ingresos[i].id, ingresos[i].nombre, ingresos[i].apellido, ingresos[i].altura);
								}
			    	      	
						  }
			    	    else{
                              printf("\n....ERROR EN LA CREACION DEL ARCHIVO....\n");			    	    	
						    }
						    
					        fclose (archivo);
				break;
						
		       case 0:
		       	      printf(".....SALIENDO DEL PROGRAMA.....MUCHAS GRACIAS\n"); break;
		       	       
		       	default:
				        printf("\n.....ERROR EN EL INGRESO.....\n"); break;
		       	       
		       } 
		     system ("pause");
		     system ("cls");  
		       	       
	} while(opcion != 0);
	
		 
	free(ingresos);

	return 0;
}








