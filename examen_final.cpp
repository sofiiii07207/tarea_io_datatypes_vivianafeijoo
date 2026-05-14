#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Tresenraya { 
private:
    char tablero[9];
    string jugador1, jugador2;
    char simboloActual;

public:
    Tresenraya(string j1, string j2) {
        jugador1 = j1;
        jugador2 = j2;
        
 for (int i = 0; i < 9; i++) {
            tablero[i] = '1' + i;
        } 
 if (rand() % 2 == 0) {
            simboloActual = 'X';
        } else {
            simboloActual = 'O';
        }
    }
 void mostrarTablero() {

        cout << " " << tablero[0] << " | " << tablero[1] << " | " << tablero[2] << endl;
        cout << "---|---|---" << endl;
        cout << " " << tablero[3] << " | " << tablero[4] << " | " << tablero[5] << endl;
        cout << "---|---|---" << endl;
        cout << " " << tablero[6] << " | " << tablero[7] << " | " << tablero[8] << endl;
    }
if (rand() % 2 == 0) {
            simboloActual = 'X';
        } else {
            simboloActual = 'O';
        }
bool colocarFicha(int posicion) {
 if (posicion < 1 || posicion > 9) {
            cout << "Posición que está fuera del rango.";
            return false;
        }
 if (tablero[posicion - 1] != ' ') {
            cout << "posicion ya esta ocupada.";
            return false;
        }
};

int main() {

    srand(time(0));

    string nombre1, nombre2;

    cout << "===== JUEGO TRES EN RAYA =====; 
    cout << "Ingrese nombre del Jugador 1 (X): ";
    getline(cin, nombre1);

    cout << "Ingrese nombre del Jugador 2 (O): ";
    getline(cin, nombre2);

    Tresenraya juego(nombre1, nombre2);

    int puntaje1 = 0;
    int puntaje2 = 0;
    
    
