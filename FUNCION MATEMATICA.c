/*# include <stdio.h>
main()
{
    float x = 0, res=0;
	int i, cant;
	
	printf("INGRESE LA CANTIDAD DE VECES QUE DESEA REALIZAR LA FUNCION MATEMATICA F(X) = 3*X-2 \n"); 
	scanf("%i",&cant);
	
	for (i = 1 ; i <= cant; i++)
	    {
	     printf("\nINGRESE EL VALOR NUMERO %i PARA X: ",i);
		 scanf("%f",&x);
		 fflush(stdin);
		 
		 res = (3*x-2);
		 
		 printf("\nEL RESULTADO NUMERO %i ES:\n\n X \t\t Y= f(x) \n%.2f \t\t  %.2f",i,x,res);	
		 printf("\n\n"); 
		 
		}
		
   /*	for (i = 1 ; i <= cant; i++)
	     {
	      printf("EL RESULTADO ES: %.2f\n",res);	
		 }
  
} 

 */

#include <stdio.h>
main()
{
	
	int i,cant;
    
    printf("INGRESE LA CANTIDAD DE VECES QUE DESEA REALIZAR LA FUNCION MATEMATICA F(X) = 3*X-2 \n");
	scanf("%i",&cant);
	
	int vector [cant];
	
	for (i = 0; i < cant; i++)
	     {
	      printf("\nINGRESE EL VALOR NUMERO %i PARA X:\n",i+1);
	      scanf("%i",&vector[i]);
	      
	      vector[i] = (3*vector[i]-2);
		 }
	    
	for (i = 0; i < cant; i++)
	     {
	      printf("\nEL RESULTADO NUMERO %i ES: %i\n",i+1,vector[i]);
		 }
	
}




