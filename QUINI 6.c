# include <stdio.h>
# include <time.h>


void generarAleatorios (int *vectorNumeros);
void elegirNumeros (int *numeros);
int verificarAciertos (int *vectorDeNumeros, int *vectorDeElegidos);
void pintarCarton ( int *numerosElegidos);



void generarAleatorios ( int *vectorNumeros)
{
	int i;
	srand (time(NULL));
	
	for(i = 0; i <6; i++)
	   {
	   	vectorNumeros [i] = rand () % 46;
	   }	
	   
	     printf("\nLOS NUMEROS ALEATORIOS GENERADOS SON:\n");
	     
    for(i = 0; i < 6; i++)
       {
       	printf("%i\t", vectorNumeros[i] );
	   }
    
    
}




void elegirNumeros (int *numeros)
{
	int i;
	for (i = 0; i < 6; i++)
    {
     printf("ELIJA 6 NUMEROS QUE VAN DE 0 A 45: ");
 	 scanf("%i",&numeros[i]);
	
	if (numeros[i] < 0 || numeros[i] > 45)
	   {
	   	printf("INGRESO UN NUMERO FUERA DEL RANGO\n");
	   	i--;
	   }
	}
    	
}


int verificarAciertos (int *vectorDeNumeros, int *vectorDeElegidos)
{
	int i, j , aciertos = 0;
	
	for (i = 0; i < 6; i++)
	    {
	    	for (j = 0; j < 6; j++)
	    	    {
	    	     if (vectorDeNumeros[i] == vectorDeElegidos[j])
	    	        {
	    	        	aciertos = aciertos +1;
					}					
				}
	    }
	return aciertos;
	
}




int main ()

{
	 int vectorNumeros [6], numerosElegidos[6], aciertos;
	 
	 elegirNumeros (numerosElegidos);
	 generarAleatorios (vectorNumeros);
	 
	aciertos =  verificarAciertos(vectorNumeros,numerosElegidos);
	
	if (aciertos >= 4)
	    {
	    	printf("GANASTE");
	    	
		}
		printf("\n\nLA CANTIDAD DE ACIERTOS ES: %i", aciertos);
	 	return 0;
	
}




