#include <iostream>

using namespace std;

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main(){
    int opcion;
    float num1, num2;

    do{
        cout << "===========BIENVENIDO A LA CALCULADORA DE OPERACIONES=======" << endl << endl;
        cout << "Seleccione la operacion que desea realizar: " << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicacion" << endl;
        cout << "4. Division" << endl;
        cout << "0. Salir" << endl;
        cin >> opcion;

      if(opcion >= 1 && opcion <= 4){
            cout << "Ingrese el primer numero: ";
            cin >> num1;
            cout << "Ingrese el segundo numero: ";
            cin >> num2;
        }

}

