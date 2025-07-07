#include <iostream>
#include <windows.h>
#include "maze_movement_1.hpp"
#include "movement_logic.hpp"

using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int dificultad = 0;
    int mapaSeleccion = 0;

    mostrarOpcionesDeMapa();
    cin >> dificultad;

    mostrarMapasPorDificultad(dificultad);
    cin >> mapaSeleccion;
    return mapaSeleccion; /// provisional, can upgrade

    MazeData gridConInicio = getMazeGrid(dificultad, mapaSeleccion);

    iniciarJuego(gridConInicio.grid,
                 gridConInicio.inicioX,
                 gridConInicio.inicioY,
                 gridConInicio.caminosValidos,
                 gridConInicio.personaje,
                 gridConInicio.meta);

    return 0;
}