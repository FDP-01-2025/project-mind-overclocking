#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Binary
void mazeb(){
    vector<string> Mazeb ={
//Fila 0 columna 18 punto de inicio
//Las B son colectibles
    "0 0 0 0 0 0 0 0 0 Y 0 0 0 0 0 0 0 0 0 0",
    "0 B 0 0 1 1 1 0 1 1 0 0 1 1 1 1 0 1 B 0",
    "0 1 0 0 1 0 1 1 1 0 1 1 1 0 0 1 1 1 0 0",
    "0 1 1 1 1 0 0 0 0 0 1 0 1 0 0 0 0 0 0 0",
    "0 0 1 0 0 1 1 1 1 1 1 0 1 1 1 1 1 1 0 0",
    "0 0 1 0 1 1 0 1 0 0 0 0 0 0 0 0 0 1 0 0",
    "0 0 1 0 1 0 0 1 0 0 0 0 0 0 0 1 1 1 0 0",
    "0 0 1 1 1 0 0 B 0 0 0 0 0 0 0 1 0 0 0 0",
    "0 0 0 0 0 0 0 0 0 0 1 1 1 1 1 1 0 0 0 0",
    "0 0 0 0 0 0 0 0 0 0 1 0 0 0 0 0 0 0 0 0"
};
    int labf=Mazeb.size();
    for (size_t i = 0; i < labf; ++i) {
        cout<<Mazeb[i]<<endl;
    }
};

//Garden of Sunflowers
void mazeg(){
    vector<string> Mazeg={
    //Inicia en fila 1 columna 3
    //🌹 son colectibles
    "🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻",
    "🌻 🐝 🟦 🟦 🟦 🌻 🟦 🟦 🌹 🌻",
    "🌻 🌻 🟦 🌻 🟦 🌻 🟦 🌻 🌻 🌻",
    "🌻 🌹 🟦 🌻 🟦 🌻 🟦 🌻 🌻 🌻",
    "🌻 🌻 🌻 🟦 🟦 🌻 🟦 🟦 🌹 🌻",
    "🌻 🌻 🟦 🟦 🌻 🌻 🟦 🌻 🌻 🌻",
    "🌻 🌻 🟦 🌻 🌻 🌻 🟦 🟦 🟦 🐞",
    "🌻 🌻 🟦 🟦 🟦 🟦 🟦 🌻 🌻 🌻",
    "🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻"
};
    int labf=Mazeg.size();
    for (size_t i = 0; i < labf; ++i) {
        cout<<Mazeg[i]<<endl;
    }
};
