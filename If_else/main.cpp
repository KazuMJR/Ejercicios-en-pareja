#include <iostream>
using namespace std;

//Escribe un programa que determine si un número ingresado por el usuario es múltiplo de 5 y de
//7.

int main() {
    int numero;

    cout << "Ingrese un numero: "<<endl;
    cin >> numero;

    if (numero % 5 == 0 && numero % 7 == 0) {
        cout << "El numero " << numero << " es multiplo de 5 y de 7." << endl;
    } else {
        cout << "El numero " << numero << " no es multiplo de 5 y de 7." << endl;
    }

    return 0;
}
