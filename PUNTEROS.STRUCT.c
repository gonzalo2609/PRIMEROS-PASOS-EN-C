# include <stdio.h>

struct pais {
	
	char nombre [25];
	int habitantes;

};

void carga (struct pais *p)
{
	printf("INGRESE EL NOMBRE DEL PAIS:");
	gets(p->nombre);
	fflush(stdin);

    printf("INGRESE SUS HABITANTES:");
	scanf("%i", &p->habitantes);
	fflush(stdin);
	printf("\n");
	

}


    void mostrar (struct pais p)
{	
    printf("PAIS: %s, HABITANTES: %i MILLONES.",p.nombre, p.habitantes);
    printf("\n");
}


int main ()
{
	
	struct pais p1, p2, p3;
	
	carga (&p1);
	carga (&p2);
	carga (&p3);
	system ("pause");
	
	printf("\n");
	mostrar (p1);
	mostrar (p2);
	mostrar (p3);
	
	return 0;
}
