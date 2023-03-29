#include<stdlib.h>
#include<stdio.h>
#include <math.h>

int main() {
	// Inicializacion de variables
	char nombre [50];
	char nivel_imc [15];
	int edad;
	float peso;
	float estatura;
	
	// Desarrollo de la logica de negocio
	printf("--------------------------------------------\n");
    printf("     Calcula tu indice de masa corporal\n");
    printf("--------------------------------------------\n");
	
	// Solicitud de los datos del usuario
    printf(" Nombre: ");
    scanf("%s", &nombre);
    printf(" Edad: ");
    scanf("%i", &edad);
    printf(" Peso: ");
    scanf("%f", &peso);
    printf(" Estatura: ");
    scanf("%f", &estatura);
    
    // Procedimiento para calcular el IMC
    float imc = (peso/pow(estatura,2));
	
	if (imc >= 30) {
		nivel_imc[0] = 'O';
		nivel_imc[1] = 'b';
		nivel_imc[2] = 'e';
		nivel_imc[3] = 's';
		nivel_imc[4] = 'i';
		nivel_imc[5] = 'd';
		nivel_imc[6] = 'a';
		nivel_imc[7] = 'd';
	} else if (imc >= 25 && imc <=29.99) {
		nivel_imc[0] = 'S';
		nivel_imc[1] = 'o';
		nivel_imc[2] = 'b';
		nivel_imc[3] = 'r';
		nivel_imc[4] = 'e';
		nivel_imc[5] = 'p';
		nivel_imc[6] = 'e';
		nivel_imc[7] = 's';
		nivel_imc[8] = 'o';
	} else if (imc >= 18.5 && imc <=24.99) {
		nivel_imc[0] = 'P';
		nivel_imc[1] = 'e';
		nivel_imc[2] = 's';
		nivel_imc[3] = 'o';
		nivel_imc[4] = ' ';
		nivel_imc[5] = 's';
		nivel_imc[6] = 'a';
		nivel_imc[7] = 'l';
		nivel_imc[8] = 'u';
		nivel_imc[9] = 'd';
		nivel_imc[10] = 'a';
		nivel_imc[11] = 'b';
		nivel_imc[12] = 'l';
		nivel_imc[13] = 'e';
	} else if (imc < 18.5) {
		nivel_imc[0] = 'B';
		nivel_imc[1] = 'a';
		nivel_imc[2] = 'j';
		nivel_imc[3] = 'o';
		nivel_imc[4] = ' ';
		nivel_imc[5] = 'p';
		nivel_imc[6] = 'e';
		nivel_imc[7] = 's';
		nivel_imc[8] = 'o';
	}
    
    printf("\n--------------------------------------------\n");
    printf(" Nombre del paciente: %s", nombre);
    printf("\n Edad: %i anios", edad);
    printf("\n Peso: %.2f kg", peso);
    printf("\n Estatura: %.2f metros", estatura);
    printf("\n--------------------------------------------\n");
    printf(" Indice de masa corporal: %.2f", imc);
    printf("\n Categoria: %s", nivel_imc);
    printf("\n--------------------------------------------\n");
	
}
