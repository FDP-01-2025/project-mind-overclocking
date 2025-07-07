#include<iostream>
#include<fstream>
using namespace std;

struct data
{
    int space[4], attemps[4];
    string collects[4], map[4], user[4];
};

string save_round(string map, string collects, int attemps, int space)
{

    int i = 0;
    data s;
    if(i <= 4)
    {
    
    cout<<"ingrese el nombre de su partida(sin espacios)"<<endl;
    cin >> s.user[i];
    } else
    {
        cout << "el limite de partidas guardadas a llegado a su limite. Elimine un guardado" << endl;
    }


    ofstream troodon("spinosurus.txt", ios::app);
    if (troodon.is_open()) {
        troodon << s.user[i] << "°°°" << space << "°°°" << map << "°°°" << collects << "°°°" << attemps << endl;
        troodon.close();
        cout << "Se ha guardaddo la partida"<<endl;
    } else {
        cout << "Algun error a sucedido";
        return "";
    }
    return "";
    
}  



int continue_round() /// second model of "continue round"
{
    data s;
    string continue_round, userP, user, map, collects;
    int space, attemps, coconut = 1;
    
    cout << "ingrese su usuario" << endl;
    cin >> userP;
    
    ifstream troodon("spinosaurus.txt"); /// i will try to see if this are well
    if (troodon.is_open()){
        while(coconut = 1){
            troodon >> user >> space >> map >> collects >> attemps;
            if( user == userP)
            {
                return user, space, map, collects, attemps;
                coconut = 0;
            }
        
        troodon.close();
        }
}else(!troodon.is_open());
{
    cout << "algo no molaba" << endl;
}
return 0;

}

int main()
{
    string user, map = "lejano mas mas alla", collects = "brolium";
    int attemps = 99999, space = 12;
    save_round(map, collects, attemps, space);
    continue_round();
    cout << map << collects << attemps << space << endl;
}