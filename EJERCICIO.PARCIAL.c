# include <stdio.h>
# include <stdlib.h>

//---------------------------------------------CREAMOS EL REGISTRO
  struct ingresos {
	int dni;
	int edad;
	char apellido [20];
	char nombre [20];
	char carrera [30];
	
                  } ;
//----------------------------------------------------------------
      
//---------------------------------------------FUNCION DE MENU            
                  
 void menu ();
 void menu()              
 {
 	printf("---->  SECCION ALUMNOS  <----\n");
	printf("(1) INGRESAR\n");
	printf("(2) LISTAR\n");
	printf("(3) GUARDAR EN ARCHIVO\n");
	printf("(0) SALIR\n\n");	
 }                 
                  
//------------------------------------------------------------                           

// ---------------------------------------------FUNCION PARA INGRESAR LOS REGISTROS

void registros (struct ingresos * reg, int a);
void registros (struct ingresos * reg, int a)
{
	
	int i;
	for (i = 0; i < a ; i++)
	    {
	    printf("\nINGRESE EL REGISTRO %i:\n", i+1);
	    
	    printf("INGRESE EL DNI:");
	    scanf("%i", &reg[i].dni);
	    fflush(stdin);
	    
	    printf("INGRESE LA EDAD:");
	    scanf("%i", &reg[i].edad);
	    fflush(stdin);
	    
	    printf("INGRESE EL APELLIDO:");
	    gets(reg[i].apellido);
	    fflush(stdin);
	    
	    printf("INGRESE EL NOMBRE:");
	    gets(reg[i].nombre);
	    fflush(stdin);
	    
	    printf("INGRESE LA CARRERA:");
	    gets(reg[i].carrera);
	    fflush(stdin); 
		}
}
//----------------------------------------------------------------------------------

// -----------------------------------------------FUNCION PARA MOSTRAR 

void mostrar (struct ingresos *reg, int a)
{
	
	int i;
	for (i = 0; i < a ; i++)
	    {
	    printf("\nREGISTRO %i:\n", i+1);
	    
	    printf("DNI: %i\n",reg[i].dni);
	    printf("EDAD: %i\n", reg[i].edad);
	    printf("NOMBRE: %s\n",reg[i].nombre);
	    printf("APELLIDO: %s\n",reg[i].apellido);
	    printf("CARRERA: %s\n",reg[i].carrera);
	    system("pause");
	    
		}
}
//--------------------------------------------------------------------

//-------------------------------------------------FUNCION PARA GUARDAR EN ARCHIVOS

/*void guardar (FILE * arc, struct ingresos * reg, int a);
void guardar (FILE * arc, struct ingresos * reg, int a)
{
	
	arc = fopen("D:\\GALVAN.ANGEL.GONZALO\\arch.txt", "a");
	
		  if (arc == NULL)
             {
              printf("EL ARCHIVO NO SE PUDO LEER PORQUE NO HAY NINGUN REGISTRO.\n");
			 }			
					    
		else {
			  int i = i;
			  for (i = 0 ; i < a; i++)
				  {
				   fprintf(arc, "%i %i %s %s %s", reg[i].dni, reg[i].edad, reg[i].nombre, reg[i].apellido, reg[i].carrera);
				  }
				  printf("EL ARCHIVO SE GUARDO EXITOSAMENTE\n");
			}	
			
	fclose(arc);	   
}
*/
//----------------------------------------------------------------------------------

// ---------------------------------------------- FUNCION PARA EL "SYSTEM CLS"

void separacion();
void separacion()
{
	system ("cls");
}
//----------------------------------------------------------------------------

//----------------------------------------------- VARIABLES GLOBALES
//  int num = 0;
//  struct ingresos *num1 = NULL;
//  FILE * archivo;
//----------------------------------------------------------------------------

//-------------------------------------------------FUNCION PARA RESERVA DE MEMORIA
void reserva (struct ingresos * reg, int a);
void reserva (struct ingresos * reg, int a)
{
	reg = (struct ingresos*) malloc (a * sizeof (struct ingresos));
	   if (reg == NULL)
		  {
		   printf("ERROR EN LA RESERVA DE MEMORIA");
		  }
								
		else{
			 printf("SE RESERVO CON EXITO LA MEMORIA PARA LO SOLICITADO\n");
		
		    }
}

//---------------------------------------------------------------------------------

int main()
{
  int num = 0;
  struct ingresos *num1 = NULL;
  FILE * archivo;
  int op;
	
	do {
		menu();                               // LLAMAMOS A LA FUNCION MENU
		
		printf("---->INGRESE LA OPCION :");
		scanf("%i",&op);
		fflush (stdin);
		
		switch (op)
		       {
		       	case 1:  	
		       		    if (num > 0)
		       		       {
		       		       	printf("YA SE CARGARON LOS REGISTROS.\n");
						   }
						   
						else{
							 printf("PARA CUANTAS PERSONAS DESEA CARGAR EL REGISTRO?: ");
						   	 scanf("%i", &num);
			  			     reserva (num1,num); 
			  			     registros (num1,num);  // LLAMAMOS A LA FUNCION DE NOMBRE REGISTRO Y LE PASAMOS LOS PARAMETROS CORRESPONDIENTES	
						    }   
						     //registros (num1,num);  // LLAMAMOS A LA FUNCION DE NOMBRE REGISTRO Y LE PASAMOS LOS PARAMETROS CORRESPONDIENTES				
		       	break;
		       		  
		       	case 2:
		       		   if (num==0)
		       		      {
		       		       printf("LISTADO VACIO\n");
						  }
						  
		       		   else {
		       		   	     printf("LISTADO COMPLETO\n");
		       		         mostrar(num1,num);           // LLAMAMOS A LA FUNCION DE NOMBRE MOSTRAR Y LE PASAMOS SUS PARAMETROS
						    } 
				break;
				
				case 3:
					  // guardar (archivo,num1,num);
					   
					   archivo = fopen("D:\\GALVAN.ANGEL.GONZALO\\arch.txt", "a");
					   if (archivo == NULL)
                           {
                           	printf("EL ARCHIVO NO SE PUDO LEER PORQUE NO HAY NINGUN REGISTRO.\n");
						   }			
					    
						else {
							  int i = i;
							  for (i =0; i < num; i++)
							      {
							      	fprintf(archivo, "%i %i %s %s %s", num1[i].dni,num1[i].edad,num1[i].nombre,num1[i].apellido,num1[i].carrera);
							      	printf("EL ARCHIVO SE GUARDO EXITOSAMENTE\n");
								  }
							   fclose(archivo);	  
						     }	
							 	  
					   break;
				
		       	case 0: printf("\nSALIENDO....\n"); break;
		       		   
		       	default: printf("\nERROR EN EL INGRESO\n");	break;
			   }
		
	system ("pause");
	separacion();                                  // LLAMAMOS A LA FUNCION LLAMADA SEPARACION 
		
	} while (op !=0);
	
	free(num1);                   // LIBERAMOS LA MEMORIA DINAMICA SOLICITADA CON LA FUNCION MALLOC
	
	return 0;
}
