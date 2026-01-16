#include <iostream>
using namespace std;

void Suma(){
    int A;
    int B;
    int total = 0;

     cout << "Ingrese los numeros: "<< endl;
     cin >> A;
     cin >> B;

        total= A+B;
    cout << "El resultado es: " << total <<  endl;
}

void Resta(){
    int A;
    int B;
    int total = 0;

     cout << "Ingrese los numeros: "<< endl;
     cin >> A;
     cin >> B;

        total= A-B;
    cout << "El resultado es: " << total <<  endl;
}

void Multiplicacion(){
    int A;
    int B;
    int total = 0;

     cout << "Ingrese los numeros: "<< endl;
     cin >> A;
     cin >> B;

        total= A*B;
    cout << "El resultado es: " << total <<  endl;
}

void Division(){
    int A;
    int B;
    int total = 0;

     cout << "Ingrese los numeros: "<< endl;
     cin >> A;
     cin >> B;

    if (B==0){
         cout << "Error el denominador es cero"<< endl;
    } else {
        total= A/B;
        cout << "El resultado es: " << total <<  endl;
}
}