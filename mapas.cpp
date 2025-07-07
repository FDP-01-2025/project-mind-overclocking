#include <iostream>
#include <vector>
using namespace std;


//declaracion de un vector de vectores tipo char

//laberinto nivel sencillo
// 🧔 protagonista  🐲enemigo    🏆salida
vector<vector<char>> laberinto1 = {
{'🧔',' ',' ','#','#','#','#','#','#',' '},
{'#',' ','#','#','#',' ',' ','#',' ','#'},
{' ',' ','#','#',' ',' ',' ',' ','#','#'},
{' ',' ','#',' ',' ','#','#','#','🏆','#'},
{' ','#','#',' ','#','#',' ',' ',' ','#'},
{' ',' ',' ',' ','#',' ',' ','#','#',' '},
{' ','#','🐲',' ',' ',' ',' ','#','#','#'},
};

void mostrarlaberinto1 () {
for (const auto& fila : laberinto1){
for (char celda : fila){
 cout << celda << ' ';
}
cout << endl;
}


}
//llamar a la funcion mostrarlaberinto en el main

//🦨 protagonista  🏆salida
vector<vector<char>> laberinto2 = {
{'🦨','█','█','█','█','█','█','█',' ',' '},
{' ',' ','█','█',' ',' ',' ',' ',' ',' '},
{' ',' ',' ',' ',' ',' ','█','█','█','█'},
{'█','█','█',' ',' ',' ',' ','█','█','█'},
{'█','█',' ',' ',' ','█','█',' ',' ',' '},
{' ',' ',' ',' ','█',' ','█',' ',' ','█'},
{'█',' ','█',' ','█',' ',' ','█',' ',' '},
{' ',' ',' ',' ','█','█',' ',' ',' ','█'},
{' ','█',' ',' ',' ',' ','█','█',' ','🏆'},
{'█','█',' ',' ','█',' ',' ',' ',' ',' '}
};

void mostrarlaberinto2 () {
for (const auto& fila : laberinto2 ){

for (char celda : fila){
 cout << celda << ' ';
}
cout << endl;
}


}
//llamar a la funcion mostrarlaberinto en el main



//mapa 3
// 🐧protagonista 🐟recompensas  🏆salida
vector<vector<char>> laberinto3 = {
{'🐧','█','█','█','█','█','█',' ',' ',' ',' ',' ',' ',' ',' ','█','█','█','█',' '},
{' ',' ','█','█',' ',' ',' ',' ',' ',' ',' ','█',' ',' ',' ',' ',' ',' ','█',' '},
{' ',' ',' ',' ',' ',' ','█','█','█','█',' ',' ',' ',' ','█','🐟',' ','█',' ',' '},
{'█','█','█','█',' ','█',' ','█','█','█','█',' ',' ',' ','█',' ',' ',' ',' ',' '},
{'█','█',' ',' ',' ','█','█',' ',' ',' ',' ','█','█','█','█',' ',' ',' ','█',' '},
{' ',' ',' ',' ','█',' ','█',' ',' ','█','█','█',' ',' ',' ',' ',' ',' ',' ','█'},
{'█','🐟','█',' ','█','█',' ','█',' ',' ',' ',' ','🐟',' ',' ','█',' ',' ',' ','█'},
{' ',' ',' ',' ','█','█',' ',' ','█','█',' ',' ','█',' ',' ','█',' ',' ',' ',' '},
{' ','█','🐟',' ',' ',' ','█','█',' ','🏆',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
{'█','█',' ',' ','█',' ',' ',' ',' ',' ','█','█','█','█','█','█','█','█','█','█'}
};

void mostrarlaberinto3 () {
for (const auto& fila : laberinto3){

for (char celda : fila){
 cout << celda << ' ';
}
cout << endl;
}


}
//llamar a la funcion mostrarlaberinto en el main
//🐶 protagonista  🍗recompensas   🏆salida
vector<vector<char>> laberinto4 = {
{'🐶','█','█','█','█','█','█',' ',' ',' ',' ',' ',' ',' '},
{' ',' ','█','█',' ',' ',' ',' ',' ',' ',' ','█',' ',' '},
{' ',' ',' ',' ',' ',' ','█','█','█','█',' ',' ','🍗',' '},
{'█','█','█','█',' ','█',' ','█','█','█','█',' ',' ',' '},
{'█','█',' ',' ',' ','█','█',' ',' ',' ',' ','█','█','█'},
{' ',' ',' ',' ','█',' ','█',' ',' ','█','█','█',' ',' '},
{'█','🍗','█',' ','█','█',' ','█',' ',' ',' ','🏆',' ',' '},



};

void mostrarlaberinto4 () {
for (const auto& fila : laberinto4){

for (char celda : fila){
 cout << celda << ' ';
}
cout << endl;
}


}
//llamar a la funcion mostrarlaberinto en el main
// 🐑 protagonista  🐻 enemigos   🏆salida
vector<vector<char>> laberinto5 = {
{'🐑','█','█','█','█','█','█',' ',' ','█','█','█','█','█'},
{' ',' ','█','█','█',' ',' ',' ','🐻',' ',' ','█',' ',' '},
{' ',' ',' ',' ',' ',' ','█','█','█','█',' ',' ','█',' '},
{'█','█','█','█',' ','█',' ','█','█',' ','█',' ',' ',' '},
{'█','█','█',' ',' ',' ',' ',' ',' ',' ',' ','█','█','█'},
{' ','█',' ',' ','█',' ','█','█',' ','█','█','█',' ',' '},
{'█','█','█',' ','█','█','█','█',' ',' ','█','█','█','█'},
{'█',' ','█',' ','█','█',' ',' ',' ',' ','█',' ',' ',' '},
{' ',' ',' ',' ',' ','█',' ','█',' ','█',' ','█',' ','█',},
{'█',' ','🐻',' ',' ',' ','█','█','█','█',' ',' ',' ','🏆'},




};

void mostrarlaberinto5 () {
for (const auto& fila : laberinto5){

for (char celda : fila){
 cout << celda << ' ';
}
cout << endl;
}


}
//llamar a la funcion mostrarlaberinto en el main

int main (){
 mostrarlaberinto1 ();
 mostrarlaberinto2 ();
 mostrarlaberinto3 ();
 mostrarlaberinto4 ();
 mostrarlaberinto5 ();
 return 0;
}








