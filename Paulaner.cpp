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

int main(){

    cout<<"Bienvenido a tu calculadora digital"<<endl;
    cout<<"Que operacion deseas realizar?"<<endl;
    cout<<"1. Suma"<<endl;  
    cout<<"2. Resta"<<endl;
    cout<<"3. Multiplicacion"<<endl;
    cout<<"4. Division"<<endl;
    int opcion;
    cin>>opcion;
    
    switch(opcion){
        case 1:
        Suma();
        break;  
        case 2:
        Resta();
        break;
        case 3:
        Multiplicacion();
        break;
        case 4:
        Division();
        break;
        
        default:
        cout<<"Opcion no valida"<<endl;
        break;
        
    }
    return 0;
}