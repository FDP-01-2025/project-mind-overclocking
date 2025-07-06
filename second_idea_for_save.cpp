#include<iostream>
#include<fstream>
using namespace std; /// I where thinking about new manu and model of save, i tried to do it

struct base_data
{
    string map[4], collects[4], profile[4], password[4];
    int attemps[4], space[4];

};

string menu_profiles()
{
   int yes = 1, oktion;
    do
    {
        cout << "Bienvenido a nuestro juego, para continuar cree un perfil o continue uno ya hecho. (1 para continuar, 2 para crear perfil, 3 para salir)" << endl;
        cin >> oktion;
        switch(oktion)
        {
            case 1:
            /// call funtion of  selection profile to continue play
            break;

            case 2:
            /// call funtion of create profile
            break;

            case 3:
            cout << "adios, adios" << endl;
            yes = 5;
            break;

            default :
            cout << "algo extraño a sucedido" << endl;
            break;
        }

    }while(yes = 1);

}

string create_profile() /// well this is the importand point, i will research about this, today continue
{

    

}

string select_profile(base_data profile[])
{
    base_data y;
    string profileS;
    int veryy_yes = 1;

    cout << "Ingrese el nombre de su perfil" << endl;
    cin >> profileS;
    do
    {
    
    for(int i = 0; i = 5; i++)
    {
        if(y.profile[i] == profileS)
        {
            veryy_yes = 2;
            break;
        } else
        {
            cout << "sucedio algun error " << endl;
            veryy_yes = 1;
        }
    }
}while(veryy_yes == 1);
    return profileS;
}

string select_profile_password_verification(base_data password[])
{
    base_data y;
    string passwordS;
    int very_yes = 1
     cout << "ingrese la contraseña de su perfil" << endl;
    cin >> passwordS;
    do
    {
    
    for(int i = 0; i = 5; i++)
    {
        if(y.password[i] == passwordS)
        {
            very_yes = 2;
            break;
        } else
        {
            cout << "sucedio algun error " << endl;
            very_yes = 1;
        }
    }
}while(very_yes == 1);
}

string continue_play() /// this also is a importand poin. Also need research about this to work today
{

}