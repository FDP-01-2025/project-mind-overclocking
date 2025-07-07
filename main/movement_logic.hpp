#ifndef MOVEMENT_LOGIC_HPP
#define MOVEMENT_LOGIC_HPP

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <cctype>
#include "maze_movement_1.hpp"
#include "player_placement.hpp"
#include "player_status.hpp"

using namespace std;

void printMap(const vector<vector<string>>& grid) {
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            cout << cell << ' ';
        }
        cout << '\n';
    }
}

char pedirMovimiento() {
    char input;
    cout << "\nMover jugador (W=arriba, A=izquierda, S=abajo, D=derecha): ";
    cin >> input;
    return toupper(input);
}

bool puedeMover(const string& celda, const set<string>& caminosValidos) {
    return caminosValidos.count(celda) > 0;
}

void iniciarJuego(vector<vector<string>> grid, int inicioX, int inicioY,
                  const set<string>& caminosValidos, const string& personaje, const string& meta) {

    vector<vector<string>> mapaOriginal = grid;

    mostrarInformacionDelJugador(personaje, meta);

    int playerX = inicioX, playerY = inicioY;

    grid[playerY][playerX] = personaje;

    bool gameOver = false;

    // Elegir casilla transitable para reemplazo (suelo)
    string casillaReemplazo;

    // Intentar elegir un emoji válido que no sea personaje ni meta
    for (const auto& celda : caminosValidos) {
        if (celda != personaje && celda != meta) {
            casillaReemplazo = celda;
            break;
        }
    }
    // Si no se encontró ninguno diferente, tomar cualquiera (el primero)
    if (casillaReemplazo.empty() && !caminosValidos.empty()) {
        casillaReemplazo = *caminosValidos.begin();
    }

    while (!gameOver) {
        system("cls");
        printMap(grid);

        char move = pedirMovimiento();
        int newX = playerX, newY = playerY;

        switch (move) {
            case 'W': newY--; break;
            case 'A': newX--; break;
            case 'S': newY++; break;
            case 'D': newX++; break;
            default: continue;
        }

        if (newX < 0 || newX >= (int)grid[0].size() || newY < 0 || newY >= (int)grid.size()) {
            cout << "No puedes salir del mapa! Presiona una tecla...";
            system("pause>nul");
            continue;
        }

        if (puedeMover(grid[newY][newX], caminosValidos)) {
            // Reemplazar la casilla anterior del jugador con la casilla transitable elegida
            grid[playerY][playerX] = casillaReemplazo;

            playerX = newX;
            playerY = newY;

            grid[playerY][playerX] = personaje;

            if (mapaOriginal[playerY][playerX] == meta) {
                system("cls");
                printMap(grid);
                cout << "\n¡Felicidades! ¡Has llegado a la meta! 🎉\n";
                gameOver = true;
            }
        } else {
            cout << "No puedes pasar ahí! Presiona una tecla...";
            system("pause>nul");
        }
    }
}

#endif
