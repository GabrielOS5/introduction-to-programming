#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int suma_secuencial(int numero);

int main() {
	// Inicializacion de variables
	int numero;
	int suma_total;
	
	// Desarrollo de la logica de negocio
    while (true) {
        printf(" Digite un numero entero positivo: ");
        if (scanf("%d", &numero) == 1) {
        	if(numero > 0 && numero < 100) {
        		suma_total = suma_secuencial(numero);
        		printf("\n---------------------------------------------------------------\n");
            	printf(" La suma total es: %d \n", suma_total);
            	printf("---------------------------------------------------------------\n");
			} else {
				printf("\n-----------------------------------------------------------------\n");
            	printf(" WARN: Por favor ingrese un numero entero positivo entre 1 y 99\n");
            	printf("-----------------------------------------------------------------\n");
			}
        	
        } else {
        	printf("\n------------------------------------------------------------\n");
            printf(" ERROR: La entrada no es un numero. Vuelva a ingresarlo\n");
            printf("------------------------------------------------------------\n");
            fflush(stdin);
        }
    }
    
    return 0;
	
}

int suma_secuencial(int numero) {
	int suma = (numero == 1) ? 1 : numero + suma_secuencial(numero - 1);
	return suma;
}
