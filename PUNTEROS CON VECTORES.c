/* CONFECCIONAR UN PROGRAMA QUE PERMITA LA CARGA DE UN VECTOR DE 5 ENTEROS
   Y OBTENGA EL MAYOR Y EL MENOR.
   HACERLO EN DOS FUNCIONES.
   1) CARGA DEL VECTOR.
   2) OTRA FUNCION QUE RECIBA EL VECTOR Y RETORNE EL MAYOR Y EL MENOR 
   ELEMENTO DEL VECTOR POR MEDIO DE DOS PARAMETROS DE TIPO PUNTERO.
   VOID RETORNO ( INT VECTOR [TAMAÑO], INT * MAYOR, INT * MENOR) */
   

# include <stdio.h>

void carga ( int vec[]);
void carga ( int vec[])
{
	int i;
	for (i = 0; i < 5; i++)
	    {
	     	printf("INGRESE LOS ELEMENTOS DEL VECTOR: ");
	     	scanf("%i", &vec[i]);
		}
}


void retorno ( int vec [], int *mayor, int * menor)
{
	*mayor = vec[0];
	*menor = vec[0];
	
	int i;
	for (i = 1; i < 5; i++)
	    {
	     if (vec[i] < *menor)
	        {
	         *menor = vec[i];	
			}
		else if (vec[i] > *mayor)
		        {
		         *mayor = vec[i];	
				}	
		
	    }
	    printf("\nEL MENOR ELEMENTO DEL VECTOR ES: %i", *menor);
	    printf("\nEL MAYOR ELEMENTO DEL VECTOR ES: %i", *mayor);
        		
		
}


int main()
{
	
	int vector [5];
	int may, men;
	carga(vector);
	retorno (vector, &may, &men);
	
	
	
	
	return 0;
}
