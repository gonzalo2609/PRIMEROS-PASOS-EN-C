# include <stdio.h>

struct fecha {
	
	int dia;
	int mes;
	int anio;
	
};



struct producto{
	
	int codigo;
	char descripcion[26];
	float precio;
	struct fecha vencimiento;    // AL REGISTRO PRODUCTO le anidamos EL REGISTRO FECHA con el campo llamado VENCIMIENTO.
	
};


void carga (struct producto *vec)
{
	int i;
	
	for (i = 0; i < 3; i++)
	    {
	      printf("INGRESE EL CODIGO DEL PRODUCTO:");
		  scanf("%i", &vec[i].codigo);
		  fflush(stdin);
		  
		  printf("INGRESE EL NOMBRE DEL PRODUCTO:");
		  fgets(vec[i].descripcion, 26 ,stdin);
		  fflush(stdin);	
	    	
	      printf("INGRESE EL PRECIO:");
		  scanf("%f", &vec[i].precio);
		  fflush(stdin);	
		  
		  printf("\nINGRESE LA FECHA DE VENCIMIENTO DEL PRODUCTO: (DIA, MES, ANIO)\n");
		  
		  printf("INGRESE EL DIA:");
		  scanf("%i", &vec[i].vencimiento.dia);
		  fflush(stdin);
		  
		   printf("INGRESE EL MES:");
		  scanf("%i", &vec[i].vencimiento.mes);
		  fflush(stdin);
		  
		   printf("INGRESE EL ANIO:");
		  scanf("%i", &vec[i].vencimiento.anio);
		  fflush(stdin);
		  
		  printf("\n");
		  
		}
}


void impresion (struct producto *vec)
{
	int i;
	
	for (i = 0; i < 3; i++)
	    {
	      printf("\nEL PRODUCTO %i ES: %i  %s  %.2f", i+1, vec[i].codigo, vec[i].descripcion, vec[i].precio);	
	      printf("\tSU VENCIMIENTO ES: %i/%i/%i", vec[i].vencimiento.dia , vec[i].vencimiento.mes , vec[i].vencimiento.anio);
	      printf("\n");	 
		}

}

int main ()
{
	
  struct producto *vector;
	
  carga (vector);	
  impresion (vector);	
	
	return 0;
}
