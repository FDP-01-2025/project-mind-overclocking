#include <iostream>
#include <vector>
using namespace std;



//declaracion de la matriz de tipo char para la elaboracion del laberinto

//laberinto nivel sencillo

char laberinto [7][10] = {
{'E',' ',' ','#','#','#','#','#','#',' '},
{'#',' ','#','#','#',' ',' ','#',' ','#'},
{' ',' ','#','#',' ',' ',' ',' ','#','#'},
{' ',' ','#',' ',' ','#','#','#','S','#'},
{' ','#','#',' ','#','#',' ',' ',' ','#'},
{' ',' ',' ',' ','#',' ',' ','#','#',' '},
{' ','#',' ',' ',' ',' ',' ','#','#','#'},
};

void mostrarlaberinto () {
for (int i = 0; i < 7; i++){

for (int j = 0; j < 10; j++){
 cout << laberinto [i][j] << ' ';
}
cout << endl;
}


}
//llamar a la funcion mostrarlaberinto en el main
