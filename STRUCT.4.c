# include <stdio.h>



struct empleado {
	
	char nombre_empleado [50];
	char dptoEmpresa[40];
	float sueldo;
		
} ;


struct domicilio {
	
	char calle [30];
	int numero;
	int codigoPostal;
	char localidad [30];
    struct empleado datos;
    
} ;

int main ()
{
	int i;
	struct domicilio lista [2];
	
	printf("INGRESE LOS DATOS\n");

    
    for( i = 0; i < 2; i++)
       {
       	
    printf("INGRESE LA CALLE DEL EMPLEADO:");
    gets(lista[i].calle);
    fflush(stdin);
    
    printf("INGRESE EL NUMERO DE LA CALLE:");
    scanf("%i",&lista[i].numero);
     fflush(stdin);
     
    printf("INGRESE EL CODIGO POSTAL:");
    scanf("%i",&lista[i].codigoPostal);
     fflush(stdin);
     
    printf("INGRESE LA LOCALIDAD:");
    gets(lista[i].localidad);
    fflush(stdin);
    
    printf("INGRESE EL NOMBRE DEL EMPLEADO:");
    gets(lista[i].datos.nombre_empleado);
    fflush(stdin);
    
    printf("INGRESE EL NOMBRE DE LA EMPRESA:");
    gets(lista[i].datos.dptoEmpresa);
    fflush(stdin);
    
    printf("INGRESE EL SUELDO:");
    scanf("%f",&lista[i].datos.sueldo);
    fflush(stdin);
    
    printf("\n");
    
	   }
	
	return 0;
}
