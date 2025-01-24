# include <stdio.h>

int suma (int a, int b)
         {
          return (a+b);
		 }

int resta (int a, int b)
         {
          return (a-b);
		 }

int multiplicacion (int a, int b)
         {
          return (a*b);
		 }

int division (int a, int b)
         {
          return (a/b);
		 }


int main()
{
   int num1,num2;
   char opcion, ingreso;
   
    printf("INGRESE DOS NUMEROS PARA REALIZAR UNA OPERACION MATEMATICA\n");

	
	do {
		
	    printf("\nINGRESE EL PRIMER NUMERO:");
	    scanf("%i",&num1);
		fflush(stdin);
			
  	    printf("INGRESE EL SEGUNDO NUMERO:");
    	scanf("%i",&num2);	
    	fflush(stdin);
		
		printf("\nQUE OPERACION DESEA REALIZAR: SUMA '+' RESTA '-' MULTIPLICACION '*' DIVISION '/'\nINGRESE EL CARACTER CORRESPONDIENTE: ");
     	scanf(" %c",&opcion);
	    fflush(stdin);
	    
	   
			switch (opcion)
	       {
	       	
	       	case '+':
	       		     printf("\nEL RESULTADO DE LA SUMA ES: %i\n\n", suma(num1,num2));
	                 break;
	                 
	        case '-':
	       		     printf("\nEL RESULTADO DE LA RESTA ES: %i\n\n", resta (num1,num2));
	                 break;         
	         
			case '*':
	       		     printf("\nEL RESULTADO DE LA MULTIPLICACION ES: %i\n\n", multiplicacion(num1,num2));
	                 break;        
	                 
	        case '/':
	       		     printf("\nEL RESULTADO DE LA DIVISION ES: %i\n\n", division(num1,num2));
	                 break;
	        
	        default:
	        	    printf("\a\n\t\t\t\t\tERROR EN EL INGRESO DEL CARACTER\n");
	        	    break;
	                
		   }
		   
		   	printf("\nDESEA SEGUIR REALIZANDO OPERACIONES? \nESCRBIR LA LETRA(S) POR SI  O LA LETRA (N) POR NO:");
     	    scanf("%s",&ingreso);
	        fflush(stdin);
		

       } while (ingreso == 's' || ingreso == 'S');
	
	
 return 0;
	
}
