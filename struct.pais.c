# include <stdio.h>

typedef struct {
	
	char nombre [30];
	int habitantes;
	char idioma [20];
	
} pais;


void ingresar ( pais *valor);
void ingresar ( pais *valor)
{
	
	printf("INGRESE EL PAIS:");
	fgets(valor->nombre,30,stdin);
	fflush(stdin);
	
	printf("INGRESE LA CANTIDAD DE HABITANTES:");
	scanf("%i", &valor->habitantes);
	fflush(stdin);
	
	printf("INGRESE EL IDIOMA:");
	fgets(valor->idioma,20,stdin);
	fflush(stdin);
	printf("\n");
		
}

void mostrar (pais *valor);
void mostrar (pais *valor)
{
	
	printf("PAIS: %s",valor->nombre);
	printf("HABITANTES: %i\n",valor->habitantes);
	printf("IDIOMA QUE HABLAN: %s\n",valor->idioma);
	
}


 main ()
{
	
	pais  uno, dos, tres;
	
	ingresar (&uno);
	mostrar(&uno);
	
	ingresar (&dos);
	mostrar(&dos);
	
	ingresar (&tres);
	mostrar(&tres);
	
	return 0;
}
