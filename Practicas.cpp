/*
1. Crea un programa que:
    - Genere un arreglo de 20 números aleatorios entre 1 y 100.
    - Implemente funciones para:
        - Contar cuántos son pares e impares.
        - Encontrar el segundo mayor y el segundo menor.
        - Invertir el arreglo (sin usar otro arreglo auxiliar).


*/

#include <iostream>
#include <random>

using namespace std;

void contar(int number[]){
    int pares = 0;
    int impares = 0;

    for(int i=0;i<20; i++)
    {
        if(number[i]%2==0){
            pares++;
        } else {
            impares++;
        }
    }
    cout << "Los numeros pares son: " << pares << endl;
    cout << "Los numeros impares son: " << impares << endl;
}

void segundon (int number[]){
    int top = 0;
    int second = 0;
    int minor = 101;
    int secondminor = 101;

    for(int j=0; j<20; j++){
        if (number[j]>top){

                second = top;
                top = number[j];

        } else if (number[j]>second && number[j]< top){
            second = number[j];
        } 
        if(number[j]< minor){

            secondminor = minor;
            minor = number[j];

        } else if (number[j]< secondminor && number[j]> minor){
            secondminor = number[j];
        }
    }
    cout << "El segundo mayor es:  " << second << endl;
    cout << "El segundo menor es: " << secondminor << endl;
}

int main(){
    random_device rd; //semilla
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100); //Generador de numeros de 1 a 100

    int num[20];

    for(int i=0; i<20; i++){
        num[i]= dis(gen);
    }

    for(int i: num){
        cout << i << endl;
    }
    contar(num);
    segundon(num);

}



