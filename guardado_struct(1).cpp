#include<iostream>
#include<fstream>
using namespace std;

struct data
{
    int space[4], attemps[4], i[5];
    string collects[4], map[4], user[4];
};

int save_round() /// I need make this funtion recibe data from the game, or I need to perfect this code. well in both cases i need to write new code

    int i;
    data s, ii;
    if(i <= 4)
    {
    cout << "Ingresa los intentos que te quedan(con su codigo)"<<endl;
    cin >> s.attemps[i]; 
    cout << "Ingresa el mapa en el que te ubicas(con su codigo)"<<endl;
    cin >> s.map[i];
    cout<<"Ingresa tu ubicacion en el mapa ubicado"<<endl;
    cin >> s.space[i];
    cout<<"Ingresa los colleccionables obtenidos"<<endl;
    cin >> s.collects[i];
    cout<<"ingrese el nombre de su partida(sin espacios)"<<endl;
    cin >> s.user[i];
    i = i + 1;
    } else
    {
        cout << "el limite de partidas guardadas a llegado a su limite. Elimine un guardado" << endl;
    }

    ofstream troodon("spinosurus.txt", ios::app);
    if (troodon.is_open()) {
        troodon << s.user<< s.attemps << "°°°" << s.map << "°°°" << s.space << "°°°" << s.collects << endl;
        troodon.close();
        cout << "Se ha guardaddo la partida"<<endl;
    } else {
        cout << "Algun error a sucedido";
    }
    return 0;
}  



int continue_round() /// first model of "continue round"
{
    data s;
    string continue_round, userP;
    
    cout << "ingrese su usuario" << endl;
    cin >> userP;
    /*
    ifstream troodon("spinosaurus.txt"); /// i dont understand how this fail, help
    if (troodon.is_open()) {
        while (troodon >> s.attemps >> s.map >> s.space >> s.collects) {
            if( s.user == userP)
            {

            }
        }
        troodon.close();
}
return 0;
*/
}

int main()
{
    int cop;
    do{
    save();
    cin >> cop;
    }while(cop = 1);
    return 0;
}