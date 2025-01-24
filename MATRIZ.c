# include <stdio.h>

void carga (int mat[3][5]);
void imprimir (int mat[3][5]);



void carga (int mat[3][5])
     {
      
      int i, j;
	  
	  for(i = 0; i < 3; i++)
	     {
	      for( j = 0; j < 5; j++)
	         {
	          printf("INGRESE LOS NUMEROS PARA LA MATRIZ DE 3 X 5: ");
	          scanf("%i",&mat[i][j]);
			 }
		
		 }	
      	
	 }

void imprimir (int mat[3][5])
           {
           	
           	 int i, j;
	  
	  for(i = 0; i < 3; i++)
	     {
	      for( j = 0; j < 5; j++)
	         {
	          printf("\t%i ",mat[i][j]);
			 }
			printf("\n");	
		 }	
		 
		   }

int main()
{
	
	int matriz [3][5];
	carga (matriz);
	imprimir(matriz);
	
	
	return 0;
}
