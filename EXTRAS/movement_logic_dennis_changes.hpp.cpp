#ifndef MOVEMENT_LOGIC_HPP
#define MOVEMENT_LOGIC_HPP

#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "maze_movement_1.hpp"

using namespace std;

// Función para pedir y obtener movimiento válido
char pedirMovimiento() {
    char input;
    cout << "\nMover jugador (W=arriba, A=izquierda, S=abajo, D=derecha): ";
    cin >> input;
    return toupper(input);
}

// Función para validar si se puede mover a una celda
bool puedeMover(const string& celda) {
    return celda == "🟦" || celda == "🐞";
}

// Función que ejecuta el bucle principal del juego
void iniciarJuego(vector<vector<string>>& grid) {
    int playerX = -1, playerY = -1;
    bool placed = false;

    // Buscar el primer camino para colocar al jugador
    for (int y = 0; y < (int)grid.size() && !placed; y++) {
        for (int x = 0; x < (int)grid[y].size(); x++) {
            if (grid[y][x] == "🟦") {
                grid[y][x] = "🐝";
                playerX = x;
                playerY = y;
                placed = true;
                break;
            }
        }
    }

    if (!placed) {
        cout << "No hay camino para colocar el jugador!\n";
        return;
    }

    bool gameOver = false;
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

        if (puedeMover(grid[newY][newX])) {
            if (grid[newY][newX] == "🐞") {
                grid[playerY][playerX] = "🟦";
                playerX = newX;
                playerY = newY;
                grid[playerY][playerX] = "🐝";
                system("cls");
                printMap(grid);
                cout << "\n¡Felicidades! ¡Has llegado a la meta! 🐞🎉\n";
                gameOver = true;
                return playerX, playerY;
            } else {
                grid[playerY][playerX] = "🟦";
                playerX = newX;
                playerY = newY;
                grid[playerY][playerX] = "🐝";
                return playerX, playerY;
            }
        } else {
            cout << "No puedes pasar ahí! Presiona una tecla...";
            system("pause>nul");
        }
    }
}

#endif