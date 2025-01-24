// TABLA DE MULTIPLICAR DEL 1 AL 9

#include <stdio.h>
main()
{
	int i, j;
	
	for (i =1; i <= 9; i++)
	    {
	       printf("\t\t\t\t\t\tLA TABLA DEL %i ES:\n\n",i);
	      for (j = 0; j <= 10; j++)
	          {
	          printf("\t\t\t\t\t\t    %i x %i = %i\n",i, j, i*j);
			  } 
			  
	printf("\n");		 
	// system ("pause");  
		}
	
}


