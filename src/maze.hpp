#include <iostream>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

//Binary
void mazeb(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
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
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
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
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
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
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
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

//Crumbs
void mazem(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    vector <string> Mazem = {
    //Inicia columna 19, fila 7
    //🐤 es coleccionable, Protagonista: 🐦
    "🌙 🌙 🌙 🌙 🍞 🌙 🌙 🌙 🌙 🌙",
    "🌙 ⭐ 🌙 🌙 ⭐ ⭐ ⭐ 🌙 🌙 🌙",
    "🌙 ⭐ 🌙 🌙 🌙 ⭐ 🐤 🌙 🌙 🌙",
    "🌙 ⭐ ⭐ 🌙 ⭐ ⭐ 🌙 🌙 🌙 🌙",
    "🌙 ⭐ 🌙 🌙 ⭐ 🌙 🌙 ⭐ ⭐ 🌙",
    "🌙 ⭐ ⭐ 🌙 ⭐ ⭐ 🌙 🌙 ⭐ 🌙",
    "🌙 🌙 ⭐ ⭐ 🌙 ⭐ 🌙 🌙 🐤 🌙",
    "🌙 🌙 🌙 🐤 ⭐ ⭐ ⭐ ⭐ ⭐ 🐦",
    "🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙"
};
    int labf=Mazem.size();
    for (size_t i = 0; i < labf; ++i) {
        cout<<Mazem[i]<<endl;
    }
};

//Secretos
void mazes1(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);  
    vector <string> MazeS1 ={
    //Protagonista Y
    //Pasar por todos los 1 antes de llegar a F 
    "0 0 0 0 0 0",
    "0 1 F 1 1 0",
    "0 1 1 1 1 0",
    "0 1 1 1 1 0",
    "0 1 1 Y 1 0",
    "0 0 0 0 0 0"
};
    int labf=MazeS1.size();
    for (size_t i = 0; i < labf; ++i) {
        cout<<MazeS1[i]<<endl;
    }
};

void mazes2(){
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);
    vector <string> MazeS2 ={
    //Protagonista 🐝
    // Pasar por todos 🟦 antes de llegar a 🐞
    "🌻 🌻 🌻 🌻 🌻 🌻 ",
    "🌻 🟦 🐞 🟦 🟦 🌻",
    "🌻 🟦 🟦 🟦 🟦 🌻",
    "🌻 🟦 🟦 🟦 🟦 🌻",
    "🌻 🟦 🐝 🟦 🟦 🌻",
    "🌻 🌻 🌻 🌻 🌻 🌻"
    };
    int labf=MazeS2.size();
    for (size_t i = 0; i < labf; ++i) {
        cout<<MazeS2[i]<<endl;
    }
};
