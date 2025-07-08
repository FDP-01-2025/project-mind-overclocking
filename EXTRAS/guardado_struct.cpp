#include<iostream>
#include<fstream>
using namespace std;

struct data
{
    int space, attemps;
    string collects, map;
};

int save()
{
    data s;

    cout << "Ingresa los intentos que te quedan(con su codigo)"<<endl;
    cin >> s.attemps;
    cout << "Ingresa el mapa en el que te ubicas(con su codigo)"<<endl;
    cin >> s.map;
    cout<<"Ingresa tu ubicacion en el mapa ubicado"<<endl;
    cin >> s.space;
    cout<<"Ingresa los colleccionables obtenidos"<<endl;
    cin >> s.collects;

    ofstream troodon("spinosurus.txt", ios::app);
    if (troodon.is_open()) {
        troodon << s.attemps << "°°°" << s.map << "°°°" << s.space << "°°°" << s.collects << endl;
        troodon.close();
        cout << "Se ha guardaddo la partida"<<endl;
    } else {
        cout << "Algun error a sucedido";
    }
}  



int continue_round()
{
    string continue_round;
    ifstream save_document("game_save");
    

}

int main()
{
    return 0;
}