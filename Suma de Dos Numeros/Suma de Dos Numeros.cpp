#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void validar() {
	float primerNumero;
	float segundoNumero;

	cout << "Ingrese un Numero: ";
	
	if (scanf("%f", &primerNumero) != 1) {
		printf("Ingrese un numero valido");
		cout << endl;
	}
	else {

		cout << "Ingrese otro Numero: ";

		if (scanf("%f", &segundoNumero) != 1) {
			printf("Ingrese un numero valido");
			cout << endl;
		}

		else {
			int resultado = primerNumero + segundoNumero;
			cout << endl;
			printf("El resultado es: " "%d", resultado);
			cout << endl;
		}
	}
}

int main() {
	cout << "Suma de Dos Numeros";
	cout << endl;
	cout << endl;
	validar();

    return 0;
}