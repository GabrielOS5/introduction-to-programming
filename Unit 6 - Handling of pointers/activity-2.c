#include <stdio.h>
#include<stdbool.h>

int main(void) {
	
	// Inicializacion de variables
	int numero;
	int *apuntador;
	int valor_final;
	
	
	// Desarrollo de la logica de negocio
	while(true) {
		printf(" Ingrese un numero: ");
		if (scanf("%d", &numero) == 1) {
			break;
	        	
	   	} else {
	        printf("\n------------------------------------------------------------\n");
		   	printf(" ERROR: La entrada no es un numero. Vuelva a ingresarlo\n");
		    printf("------------------------------------------------------------\n");
		    fflush(stdin);
	    }
	}
	
	apuntador = &numero;
	valor_final = *apuntador;
	
	printf(" Numero: %d\n", valor_final);
	printf(" Direccion de memoria: %p\n", &valor_final);
	
	
	return 0;
}
