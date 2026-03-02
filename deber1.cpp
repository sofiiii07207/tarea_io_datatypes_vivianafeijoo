#include <iostream>
using namespace std;

int main() {

    string nombre;
    int edad;
    float estatura;
    double peso;
    char inicial;

    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su edad: ";
    cin >> edad;

    cout << "Ingrese su estatura en metros: ";
    cin >> estatura;

    cout << "Ingrese su peso en kg: ";
    cin >> peso;

    cout << "Ingrese la inicial de su apellido: ";
    cin >> inicial;

    cout << "\n--- Datos ingresados ---" << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
    cout << "Estatura: " << estatura << " metros" << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Inicial del apellido: " << inicial << endl;

    return 0;
}
