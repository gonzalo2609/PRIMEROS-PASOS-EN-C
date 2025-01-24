/* DECLARAR UN REGISTRO QUE PERMITA ALMACENAR EL CODIGO, DESCRIPCION, Y PRECIO DE UN PRODUCTO.
   LUEGO DEFINIR DOS VARIABLES DE DICHO TIPO (STRUCT) CARGARLAS E IMPRIMIR EL NOMBRE DEL 
   PRODUCTO QUE TIENE MAYOR PRECIO*/

# include <stdio.h>

struct producto
 {
	int codigo;
	char descripcion [40];
	float precio;
 };


void cargaProductos()
{
	struct producto producto1,producto2;
	
	printf("INGRESE EL CODIGO DEL PRIMER PRODUCTO: ");
	scanf("%i", &producto1.codigo);
	fflush(stdin);
	
	printf("INGRESE LA DESCRIPCION DEL PRIMER PRODUCTO:");
	gets (producto1.descripcion);
	
	printf("INGRESE EL PRECIO DEL PRIMER PRODUCTO: ");
	scanf("%f", &producto1.precio);
	
	printf("\nINGRESE EL CODIGO DEL SEGUNDO PRODUCTO: ");
	scanf("%i", &producto2.codigo);
	fflush(stdin);
	
	printf("INGRESE LA DESCRIPCION DEL SEGUNDO PRODUCTO:");
	gets (producto2.descripcion);
	
	printf("INGRESE EL PRECIO DEL SEGUNDO PRODUCTO: ");
	scanf("%f", &producto2.precio);
	
   if(producto1.precio > producto2.precio)
     {
       printf("\nEL PRODUCTO %s TIENE EL MAYOR PRECIO.",producto1.descripcion); 
	 }
	 
else if (producto1.precio < producto2.precio) 
	    {
	      printf("\nEL PRODUCTO %s TIENE EL MAYOR PRECIO.",producto2.descripcion);  	
		}
else {
	  printf("\nLOS DOS PRODUCTOS TIENEN EL MISMO PRECIO.");
     }	 
	 
}


int main ()
{
	
	cargaProductos();
	
	
return 0;
}
