#include <iostream>
using namespace std;

int main()
{
    int primerNumero;
    int segundoNumero;
    int resultado;

    cout << "Ingrese un numero: ";
    cin >> primerNumero;
    cout << "Ingrese otro numero: ";
    cin >> segundoNumero;

    resultado = primerNumero + segundoNumero;

    cout << primerNumero << " + " << segundoNumero << " = " << resultado;

    return 0;
}