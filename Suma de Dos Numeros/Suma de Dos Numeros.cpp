#include <iostream>
using namespace std;

int main()
{
    int primerNumero, segundoNumero, resultado;

    cout << "Ingrese dos numeros: ";
    cin >> primerNumero >> segundoNumero;

    // Esta es la suma de dos números
    resultado = primerNumero + segundoNumero;

    // Display del resultado
    cout << primerNumero << " + " << segundoNumero << " = " << resultado;

    return 0;
}