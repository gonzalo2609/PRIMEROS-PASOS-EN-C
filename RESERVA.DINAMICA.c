/* PEDIR INGRESAR POR TECLADO CUANTAS LETRAS TIENE UNA PALABRA.
   SEGUIDAMENTE CREAR UN VECTOR DE FORMA DINAMICA QUE RESERVE EL 
   ESPACIO MINIMO PARA DICHA PALABRA. CARGAR POR TECLADO LA PALABRA,
   MOSTRARLA Y FINALMENTE LIBERAR EL ESPACIO SOLICITADO.*/
   
# include <stdio.h>
# include <stdlib.h>



int main ()
{
	char *palabra;
	int cant;
	
	printf("INGRESE LA CANTIDAD DE LETRAS QUE TIENE LA PALABRA QUE DESEA INGRESAR:");
	scanf("%i", &cant);
	fflush(stdin);
	
 
 
 	palabra = malloc ((cant+1)*sizeof(char));	
 	
 	if (palabra == NULL)
 	    {
 	   	 printf("NO HAY ESPACIO SUFICIENTE");
		}
		
	else {
		
		printf("INGRESE LA PALABRA:");
	    fgets (palabra, cant ,stdin);		
		printf("\nLA PALABRA INGRESASA ES: %s",palabra);
		  
       	}
	 free(palabra);
	
	return 0;
}
