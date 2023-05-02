#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

bool validar_digitos(int numero);
void imprimir_error_por_letra();
void imprimir_alerta_por_numero();
int calcular_potencia(int base, int exponente);
void imprimir_resultado(int base, int exponente, int producto);

int main() {
	// Inicializacion de variables
	int base;
	int exponente;
	int producto;
	bool es_valido;
	
	// Desarrollo de la logica de negocio
	while(true) {
	
		printf(" Digite el valor de la base: ");
        if (scanf("%d", &base) == 1) {
        	
        	es_valido = validar_digitos(base);
        	
        	if(es_valido) {
	        	printf(" Digite el valor del exponente: ");
		        if (scanf("%d", &exponente) == 1) {
		        	
		        	es_valido = validar_digitos(exponente);
		        	
		        	if(es_valido) {
		        		
		        		producto = calcular_potencia(base, exponente);
		        		imprimir_resultado(base, exponente, producto);
		        		
					} else {
						imprimir_alerta_por_numero();
					}
		        	
		    	} else {
		        	imprimir_error_por_letra();
		        }
			} else {
				imprimir_alerta_por_numero();
			}
        	
        } else {
        	imprimir_error_por_letra();
        }
	
	}
	
    return 0;
	
}

bool validar_digitos(int numero) {
	bool es_valido = numero < 10 && numero > 0;
	return es_valido;
}

void imprimir_alerta_por_numero() {
	printf("\n------------------------------------------------------------\n");
	printf(" WARN: Ingrese un valor entre el rango de 1 y 9\n");
	printf("------------------------------------------------------------\n");
}

void imprimir_error_por_letra() {
	printf("\n------------------------------------------------------------\n");
    printf(" ERROR: La entrada no es un numero. Vuelva a ingresarlo\n");
    printf("------------------------------------------------------------\n");
    fflush(stdin);
}

int calcular_potencia(int base, int exponente) {
	int producto = 1;
	do {
		producto *= base;
		exponente--;
	}while(exponente != 0);
	return producto;
}

void imprimir_resultado(int base, int exponente, int producto) {
	printf("\n------------------------------------------------------------\n");
    printf("El resultado de %d elevado a %d es: %d\n", base, exponente, producto);
    printf("------------------------------------------------------------\n");
}
