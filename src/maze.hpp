#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Laberinto con tematica binario
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

//Laberinto tematica jardin
