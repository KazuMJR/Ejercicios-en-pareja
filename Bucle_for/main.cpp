#include <iostream>

using namespace std;
int main() {

    //Escribe un programa que solicite al usuario un número y muestre la tabla de multiplicar de ese
    //número del 1 al 10.

    int numero;

        cout<<"Digita un numero para generar la tabla de multiplicar deseada\n";cin>>numero;

     if(numero>=1){
    for(int i=1; i<=10; i++){
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
    }
         }else{
         cout<<"Digite numeros positivos"<<endl;
     }
    return 0;
}
