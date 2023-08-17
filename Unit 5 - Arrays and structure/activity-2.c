#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	
	// Inicializacion de variables
	char digito[7] = "1257851"; 
	int suma_posicion_par = 0;
	int suma_posicion_inpar = 0;
	int suma_valor_par = 0;
	int suma_valor_inpar = 0;
	int valor = 0;
	int i = 0;
	
	// Determine la suma de los números de posición par
	for(i = 0; i < strlen(digito); i++) {
		if(i % 2 == 0) {
			suma_posicion_par += (digito[i] - '0');
		}
	}
	printf("La suma de los numeros de posicion par: %d\n", suma_posicion_par);
	
	// Determine la suma de los números de posición impar
	for(i = 0; i < strlen(digito); i++) {
		if(i % 2 != 0) {
			suma_posicion_inpar += (digito[i] - '0');
		}
	}
	printf("La suma de los numeros de posicion inpar: %d\n", suma_posicion_inpar);
	
	// Determine la suma de los números de valor par.
	for(i = 0; i < strlen(digito); i++) {
		valor = digito[i] - '0';
		if(valor % 2 == 0) {
			suma_valor_par += valor;
		}
	}
	printf("La suma de los numeros de valor par: %d\n", suma_valor_par);
	
	// Determine la suma de los números de valor impar
	for(i = 0; i < strlen(digito); i++) {
		valor = digito[i] - '0';
		if(valor % 2 != 0) {
			suma_valor_inpar += valor;
		}
	}
	printf("La suma de los numeros de valor inpar: %d\n", suma_valor_inpar);
	
	return 0;
}

