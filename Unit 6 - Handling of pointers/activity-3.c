#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>

void mensaje_error();

int main (void) {
	
	// Inicializacion de variables
	int numero_1;
	int numero_2;
	int numero_3;
	int numero_4;
	int numero_5;
	
	// Desarrollo de la logica
	
	while(true) {
		printf(" Ingrese el valor 1: ");
		if (scanf("%d", &numero_1) == 1) {
			break;
	        	
	   	} else {
	        mensaje_error();
	    }
	}
	
	while(true) {
		printf(" Ingrese el valor 2: ");
		if (scanf("%d", &numero_2) == 1) {
			break;
	        	
	   	} else {
	        mensaje_error();
	    }
	}
	
	while(true) {
		printf(" Ingrese el valor 3: ");
		if (scanf("%d", &numero_3) == 1) {
			break;
	        	
	   	} else {
	        mensaje_error();
	    }
	}
	
	while(true) {
		printf(" Ingrese el valor 4: ");
		if (scanf("%d", &numero_4) == 1) {
			break;
	        	
	   	} else {
	        mensaje_error();
	    }
	}
	
	while(true) {
		printf(" Ingrese el valor 5: ");
		if (scanf("%d", &numero_5) == 1) {
			break;
	        	
	   	} else {
	        mensaje_error();
	    }
	}
	
	printf("------------------------------------------------------------\n");
   	printf("Valor: %d\n", numero_1);
    printf("Direccion de memoria: %p\n", &numero_1);
    printf("------------------------------------------------------------\n");
   	printf("Valor: %d\n", numero_2);
    printf("Direccion de memoria: %p\n", &numero_2);
    printf("------------------------------------------------------------\n");
   	printf("Valor: %d\n", numero_3);
    printf("Direccion de memoria: %p\n", &numero_3);
    printf("------------------------------------------------------------\n");
   	printf("Valor: %d\n", numero_4);
    printf("Direccion de memoria: %p\n", &numero_4);
    printf("------------------------------------------------------------\n");
   	printf("Valor: %d\n", numero_5);
    printf("Direccion de memoria: %p\n", &numero_5);
	
	
	return 0;
}

void mensaje_error() {
	printf("\n------------------------------------------------------------\n");
   	printf(" ERROR: La entrada no es un numero. Vuelva a ingresarlo\n");
    printf("------------------------------------------------------------\n");
    fflush(stdin);
}
