#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main() {
	// Inicializacion de variables
	int numero;
	
	// Desarrollo de la logica de negocio
    printf("-----------------------------------------------------\n");
    printf(" Programa para determinar si un valor es par o impar\n");
    printf("-----------------------------------------------------\n");
    
    while (true) {
        printf("\n Digite un numero entero: ");
        if (scanf("%i", &numero) == 1) {
        	if (numero % 2 == 0) {
        		printf("----------------------\n");
        		printf("  El numero es par\n");
        		printf("----------------------\n");
        	} else {
        		printf("----------------------\n");
            	printf("  El numero es impar\n");
            	printf("----------------------\n");
        	}
        } else {
        	printf("\n-------------------------------------------------------------\n");
            printf(" ERROR: La entrada no es un numero entero. Vuelva a ingresar\n");
            printf("-------------------------------------------------------------\n");
            fflush(stdin);
        }
    }
	
}
