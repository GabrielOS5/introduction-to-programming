#include<stdlib.h>
#include<stdio.h>

const float PI = 3.1416;
double calcular_perimetro(double radio);
double calcular_area(double radio);

int main() {
	// Inicializacion de variables
	double radio;
	double area;
	double perimetro;
	
	// Desarrollo de la logica de negocio
	printf(" Digite el valor del radio: ");
    scanf("%lf", &radio);
    
    perimetro = calcular_perimetro(radio);
    area = calcular_area(radio);
    
    printf("\n----------------------------------------\n");
	printf(" Area: %.2lf\n", area);
	printf(" Perimetro: %.2lf", perimetro);
	printf("\n----------------------------------------\n");
	
	return 0;
}

double calcular_area(double radio) {
	double area = PI * (radio * radio);
	return area;
}

double calcular_perimetro(double radio) {
	double perimetro = 2 * PI * radio;
	return perimetro;
}
