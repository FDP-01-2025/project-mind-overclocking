#include <iostream>
#include <string>
#include <vector>
using namespace std;

//Binary
void mazeb(){
    vector<string> Mazeb ={
//Fila 0 columna 18 punto de inicio
//Las B son colectibles, Protagonista: Y
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
    //🌹 son colectibles, Protagonista:🐝
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

//Green friends
void mazel(){
    vector<string> Mazel={
    //Inicia en fila 1 columna 1
    //🐢 es la coleccionable, Protagonista:🐸
    "🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿",
    "🐸 🟩 🟩 🟩 🟩 🟩 🟩 🌿 🟩 🟩 🌿",
    "🌿 🌿 🌿 🟩 🌿 🌿 🟩 🌿 🌿 🟩 🌿",
    "🌿 🌿 🌿 🟩 🌿 🌿 🟩 🟩 🟩 🟩 🌿",
    "🌿 🟩 🟩 🟩 🌿 🌿 🌿 🌿 🟩 🌿 🌿",
    "🌿 🟩 🌿 🌿 🌿 🌿 🟩 🟩 🟩 🟩 🌿",
    "🌿 🟩 🌿 🌿 🌿 🟩 🟩 🌿 🌿 🌿 🌿",
    "🌿 🟩 🌿 🌿 🟩 🟩 🌿 🌿 🟩 🟩 🌿",
    "🌿 🟩 🐢 🌿 🟩 🌿 🌿 🌿 🌿 🟩 🌿 🌿 🌿 🌿",
    "🌿 🟩 🟩 🌿 🟩 🟩 🟩 🟩 🌿 🟩 🟩 🟩 🟩 🌿",
    "🌿 🌿 🟩 🌿 🌿 🌿 🌿 🟩 🌿 🌿 🌿 🌿 🟩 🌿",
    "🌿 🌿 🟩 🟩 🟩 🟩 🌿 🟩 🌿 🟩 🟩 🟩 🟩 🌿",
    "🌿 🟩 🌿 🌿 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🌿",
    "🌿 🟩 🟩 🟩 🟩 🟩 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🌿 🌿 🌿 🌿 🌿 🌿",
    "🌿 🟩 🌿 🌿 🌿 🌿 🌿 🟩 🌿 🟩 🌿 🌿 🌿 🟩 🟩 🟩 🟩 🟩 🌿",
    "🌿 🟩 🌿 🟩 🟩 🟩 🌿 🟩 🌿 🟩 🌿 🌿 🌿 🟩 🌿 🟩 🌿 🌿 🌿",
    "🌿 🟩 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🌿 🌿 🟩 🌿 🟩 🌿 🟩 🌿",
    "🌿 🟩 🟩 🟩 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🟩 🟩 🟩 🌿 🟩 🌿 🟩 🌿",
    "🌿 🟩 🌿 🌿 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🟩 🌿 🌿 🌿 🟩 🟩 🟩 🌿",
    "🌿 🐢 🌿 🌿 🌿 🟩 🌿 🟩 🟩 🟩 🟩 🟩 🌿 🌿 🌿 🌿 🌿 🟩 🌿",
    "🌿 🌿 🌿 🌿 🌿 🟩 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🟩 🟩 🟩 🌿 🟩 🌿",
    "🌿 🌿 🌿 🌿 🌿 🟩 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🟩 🌿 🟩 🌿 🌿 🌿",
    "🌿 🟩 🟩 🟩 🟩 🟩 🟩 🟩 🟩 🟩 🟩 🟩 🟩 🐢 🌿 🟩 🟩 🟩 🐸",
    "🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿"

};
    int labf=Mazel.size();
    for (size_t i = 0; i < labf; ++i) {
        cout<<Mazel[i]<<endl;
    }
};

//Rats
void mazer(){
    vector <string> Mazer ={
    //Inicia columna 9, fila 0
    //🧀 es coleccionable, Protagonista: 🐭
    "🧱 🧱 🧱 🧱 🐭 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱",
    "🧱 🧱 🧱 🧱 🔲 🔲 🔲 🧱 🧱 🧱 🧱 🧱 🧱",
    "🧱 🔲 🔲 🔲 🧱 🧱 🔲 🧱 🔲 🔲 🔲 🔲 🧱",
    "🧱 🔲 🧱 🔲 🔲 🔲 🔲 🧱 🧱 🧱 🧱 🔲 🧱",
    "🧱 🔲 🧱 🧱 🧱 🧱 🧱 🧱 🔲 🔲 🔲 🔲 🧱",
    "🧱 🔲 🔲 🔲 🧀 🔲 🔲 🔲 🔲 🧱 🔲 🧱 🧱",
    "🧱 🧱 🔲 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🔲 🧱 🧱",
    "🧱 🧱 🔲 🧱 🧱 🔲 🔲 🔲 🔲 🧱 🔲 🧱 🧱",
    "🧱 🧱 🔲 🔲 🔲 🔲 🧱 🧱 🔲 🧱 🔲 🧱 🧱",
    "🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🔲 🔲 🔲 🔲 🧱 ",
    "🧱 🔲 🔲 🧀 🔲 🔲 🔲 🧱 🔲 🧱 🔲 🧱 🧱",
    "🧱 🧱 🔲 🧱 🔲 🧱 🔲 🔲 🔲 🧱 🔲 🧱 🧱 ",
    "🧱 🧱 🔲 🧱 🔲 🧱 🧱 🧱 🧱 🧱 🔲 🔲 🧱",
    "🧱 🔲 🔲 🧱 🔲 🔲 🔲 🔲 🔲 🧀 🧱 🔲 🧱 ",
    "🧱 🔲 🧱 🧱 🧱 🧱 🧱 🧱 🔲 🧱 🔲 🔲 🧱",
    "🧱 🔲 🔲 🔲 🔲 🧱 🔲 🔲 🔲 🧱 🔲 🧱 🧱",
    "🧱 🧱 🧱 🧱 🔲 🧱 🔲 🧱 🧱 🔲 🔲 🧱 🧱",
    "🧱 🧱 🧱 🧱 🧱 🧱 🐭 🧱 🧱 🧱 🧱 🧱 🧱"
};
    int labf=Mazer.size();
    for (size_t i = 0; i < labf; ++i) {
        cout<<Mazer[i]<<endl;
    }
};
