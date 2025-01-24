//SE INGRESAN CARACTERES HASTA QUE SE ESCRIBE LA LETRA S PARA SALIR DEL PROGRAMA

# include <stdio.h>
main()
{

    char ingreso;
    //printf("CANTIDAD DE BYTE DE LA VARIABLE INGRESO: %i\n\n", sizeof(ingreso));
    
    do {
	    printf("INGRESE UNA LETRA (EL PROGRAMA TERMINARA SI APRETA LA LETRA S)\n\n");
     	scanf("%c",&ingreso);
     	fflush(stdin);
    
       }
        while( ingreso != 's' && ingreso != 'S');
}
