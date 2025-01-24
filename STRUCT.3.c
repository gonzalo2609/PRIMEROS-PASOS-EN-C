# include <stdio.h>

struct pais 
{
	char nombre[40];
	int habitantes;
	
};

void imprimir (struct pais p)
{
	printf("EL PAIS ES: %s y tiene %i HABITANTES.", p.nombre, p.habitantes);
    printf("\n\n");
}


int main ()
{
	struct pais pais1 = {"ARGENTINA", 45000000};
	struct pais pais2 = {"BRASIL", 210000000};
	struct pais pais3 = {"PERU", 1000000};
	
	imprimir(pais1);
	imprimir(pais2);
	imprimir(pais3);
	
	return 0;
}
