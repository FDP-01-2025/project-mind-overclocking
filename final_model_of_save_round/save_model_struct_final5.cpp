#include<iostream>
#include<fstream>
#include <string>

using namespace std;

struct data
{
    string mapaSeleccion[4], user[4]; ///struct is dificult to use :,(
};

void save_round() {
    string user, mapaSeleccion; ///was difficult put the pieces together

    cout << "Ingrese el nombre de su partida (sin espacios): ";
    cin >> user;
    cout << "Ingrese el nombre del mapa: ";
    cin >> mapaSeleccion;

    ofstream troodon("spinosaurus.txt", ios::app);
    if (troodon.is_open()) {
        troodon << user << " " << mapaSeleccion << endl;
        troodon.close();
        cout << "se a guardado la partida" << endl;
    } else {
        cout << "algo no molaba, error guardando partida" << endl;
    }
}

string continue_round() {
    string userP, userArchivo, mapa; ///funtion that was made to return the "user"
    cout << "Ingrese su usuario: ";
    cin >> userP;

    ifstream troodon("spinosaurus.txt");
    if (troodon.is_open()) {
        while (troodon >> userArchivo >> mapa) {
            if (userArchivo == userP) {
                cout << "Usuario encontrado °°° esta en:" << mapa << endl;
                return userArchivo;
            }
        }
        troodon.close();
        cout << "no encontramos el perfil" << endl;
    } else {
        cout << "sucedio algun error cargando la partida" << endl;
    }
    return "";
}

string continue_round2() {
    string userP, userArchivo, mapa; ///this funtion is very similar than the pre-funtion, his diference is that this return "mapa"
    cout << "Ingrese su usuario(ahora es para encontrar el mapa donde guardo la partida, hagalo si desea que salga bien): ";
    cin >> userP;

    ifstream troodon("spinosaurus.txt");
    if (troodon.is_open()) {
        while (troodon >> userArchivo >> mapa) {
            if (userArchivo == userP) {
                cout << "Usuario encontrado °°° esta en:" << mapa << endl;
                return mapa;
            }
        }
        troodon.close();
        cout << "no encontramos el perfil" << endl;
    } else {
        cout << "sucedio algun error cargando la partida" << endl;
    }
    return "";
}

int main() { /// este int main fue solamente hecho para la practica del codigo
    save_round();                 
    string user = continue_round();  
    string mapa = continue_round2();
    cout << user << "¬|||¬" << mapa << endl;
    return 0;
}