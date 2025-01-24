# include <stdio.h>


struct pais {
	
	char nombre [40];
	int cantHabitantes;
};


void comienzo ();
void comienzo ()
{
	printf("CARGUE EL NOMBRE DE 3 PAISES Y LA CANTIDAD DE HABITANTES QUE TIENE CADA UNO DE ELLOS.\n\t\t\t(LAS CANTIDADES DEBEN SER DISTINTAS)\n\n");
}



void carga();
void carga ()
{
	struct pais p1, p2, p3;
	
	printf("INGRESE EL NOMBRE DEL PRIMER PAIS: ");
	scanf(" %s",&p1.nombre);
	printf("INGRESE SU CANTIDAD DE HABITANTES:");
	scanf("%i",&p1.cantHabitantes);
	
	
	printf("\nINGRESE EL NOMBRE DEL SEGUNDO PAIS: ");
	scanf(" %s",&p2.nombre);
	printf("INGRESE SU CANTIDAD DE HABITANTES:");
	scanf("%i",&p2.cantHabitantes);
	
	
	printf("\nINGRESE EL NOMBRE DEL TERCER PAIS: ");
	scanf(" %s",&p3.nombre);
	printf("INGRESE SU CANTIDAD DE HABITANTES:");
	scanf("%i",&p3.cantHabitantes);
	
	if (p1.cantHabitantes > p2.cantHabitantes && p1.cantHabitantes > p3.cantHabitantes)
	   {
	   	printf("\n\nEL PAIS CON MAYOR CANTIDAD DE HABITANTES ES: %s", p1.nombre);
	   }
	else if (p2.cantHabitantes > p1.cantHabitantes && p2.cantHabitantes > p3.cantHabitantes)
	   {
	   	printf("\n\nEL PAIS CON MAYOR CANTIDAD DE HABITANTES ES: %s", p2.nombre);
	   }
	else 
	   {
	   	printf("\n\nEL PAIS CON MAYOR CANTIDAD DE HABITANTES ES: %s", p3.nombre);
	   }
}


int main ()
{
	comienzo();
	carga();
	
	
	
	
	return 0;
}
