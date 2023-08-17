#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include<stdbool.h>

bool validar_cadena(char digito[20]);
bool validar_numero(char digito[20]);

int main(void) {
	
	// Inicializacion de variables
	char digito[20];
	char respuesta[5];
	int i = 0;
	int contador = 0;
	
	// Desarrollo de la logica de negocio
	
	do {
		printf("\nIngrese un numero no mayor a 5 digitos: \n");
		scanf("%s", digito);
		
		bool es_digito = validar_cadena(digito);
		
		if (es_digito) {
			
			bool es_valido = validar_numero(digito);
			
			if(es_valido) {
				break;
			}
			
		}
		
	} while(true);
	
	contador = strlen(digito);
	do {
		respuesta[i] = digito[contador-1];
		i++;
		contador--;
	} while(contador != 0);
	
	printf("\nResultado: %s", respuesta);
	
	return 0;
}

bool validar_cadena(char digito[20]) {
	int i = 0;
	bool es_numero = true;
	for (i = 0; i < strlen(digito); i++) {
	    if (!isdigit(digito[i])) {
	        printf("\nLa cadena %s ingresada no es un valor numerico. Ingrese nuevamente el valor.\n", digito);
	        es_numero = false;
	        break;
	    }
	}
	
	return es_numero;
}

bool validar_numero(char digito[20]) {
	bool es_correcta = true;
	
	if(strlen(digito) > 5) {
		es_correcta = false;
		printf("\nLa cadena %s es mayor a 5 digitos. Ingrese nuevamente el valor.\n", digito);
	}
	return es_correcta;
}
