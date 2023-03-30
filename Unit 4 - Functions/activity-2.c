#include<stdlib.h>
#include<stdio.h>

double sumar(double valor_1, double valor_2);
double restar(double valor_1, double valor_2);
double multiplicacion(double valor_1, double valor_2);
double division(double valor_1, double valor_2);

int main () {
	// Inicializacion de variables
	double valor_1;
	double valor_2;
	
	double suma;
	double resta;
	double producto;
	double cociente;
	
	// Desarrollo de la logica de negocio
	printf(" Digite el valor 1: ");
    scanf("%lf", &valor_1);
    
    printf(" Digite el valor 2: ");
    scanf("%lf", &valor_2);
    
    suma = sumar(valor_1, valor_2);
    resta = restar(valor_1, valor_2);
    producto = multiplicacion(valor_1, valor_2);
    
    printf("\n----------------------------------------\n");
    printf(" La suma de %.2lf + %.2lf es %.2lf \n", valor_1, valor_2, suma);
    printf(" La diferencia de %.2lf - %.2lf es %.2lf \n", valor_1, valor_2, resta);
    printf(" La multiplicacion de %.2lf * %.2lf es %.2lf \n", valor_1, valor_2, producto);
    
    if(valor_2 != 0) {
    	cociente = division(valor_1, valor_2);
    	printf(" La division de %.2lf / %.2lf es %.2lf ", valor_1, valor_2, cociente);
    	printf("\n----------------------------------------\n");
	} else {
		printf("\n----------------------------------------\n");
    	printf(" ERROR: No se puede dividir entre =\n");
    	printf("\n----------------------------------------\n");
	}
	
	return 0;
}

double sumar(double valor_1, double valor_2) {
	return valor_1 + valor_2;
}

double restar(double valor_1, double valor_2) {
	return valor_1 - valor_2;
}

double multiplicacion(double valor_1, double valor_2) {
	return valor_1 * valor_2;
}

double division(double valor_1, double valor_2) {
	return valor_1 / valor_2;
}
