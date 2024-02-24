#include <iostream>
using namespace std;

int main() {
    //Crea un programa que pida al usuario ingresar números hasta que el número ingresado sea igual
    //a 0.

    int numero;

    cout << "Ingrese un numero (ingrese 0 para salir): "<<endl;
    cin >> numero;

    while (numero != 0) {
        cout << "Usted ingresó: " << numero << endl;

        cout << "Ingrese otro numero (ingrese 0 para salir): "<<endl;
        cin >> numero;
    }

    cout << "Ha ingresado 0. El programa ha terminado." << endl;

    return 0;
}