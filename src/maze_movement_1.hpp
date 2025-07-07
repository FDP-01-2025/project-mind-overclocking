#ifndef MAZE_MOVEMENT_1_HPP
#define MAZE_MOVEMENT_1_HPP

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "vector_utils.hpp"

using namespace std;

struct MapaConInicio {
    vector<string> mapa;
    int inicioX;
    int inicioY;
    set<string> caminosValidos;
    string personaje;
    string meta;
};

// Nueva estructura completa con meta incluida
struct MazeData {
    vector<vector<string>> grid;
    int inicioX;
    int inicioY;
    set<string> caminosValidos;
    string personaje;
    string meta;
};

void mostrarOpcionesDeMapa() {
    cout << "\nSelecciona una dificultad:\n";
    cout << "1. Fácil\n2. Medio\n3. Difícil\n";
    cout << "Ingresa el número de dificultad: ";
}

void mostrarMapasPorDificultad(int dificultad) {
    switch (dificultad) {
        case 1:
            cout << "\nMapas Fáciles:\n1. Jardín de Girasoles\n2. Jardín Reducido\n";
            break;
        case 2:
            cout << "\nMapas Medios:\n1. Ratas\n2. Amigos Verdes\n3. Migajas\n";
            break;
        case 3:
            cout << "\nMapas Difíciles:\n1. Secretos 1\n2. Secretos 2\n3. Secretos 3\n4. Secretos 4\n5. Secretos 5\n";
            break;
        default:
            cout << "\nDificultad no válida.\n";
            break;
    }
    cout << "Selecciona el mapa (por número): ";
}

MapaConInicio obtenerMapa(int dificultad, int seleccion) {
    switch (dificultad) {
        case 1:
            switch (seleccion) {
                case 1:
                    return {
                        {
                            "🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻",
                            "🌻 🐝 🟦 🟦 🟦 🌻 🟦 🟦 🌹 🌻",
                            "🌻 🌻 🟦 🌻 🟦 🌻 🟦 🌻 🌻 🌻",
                            "🌻 🌹 🟦 🌻 🟦 🌻 🟦 🌻 🌻 🌻",
                            "🌻 🌻 🌻 🟦 🟦 🌻 🟦 🟦 🌹 🌻",
                            "🌻 🌻 🟦 🟦 🌻 🌻 🟦 🌻 🌻 🌻",
                            "🌻 🌻 🟦 🌻 🌻 🌻 🟦 🟦 🟦 🐞",
                            "🌻 🌻 🟦 🟦 🟦 🟦 🟦 🌻 🌻 🌻",
                            "🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻"
                        },
                        1, 1,
                        {"🟦", "🐞"},
                        "🐝",
                        "🐞"
                    };
                case 2:
                    return {
                        {
                            "🌻 🌻 🌻 🌻 🌻 🌻",
                            "🌻 🟦 🐞 🟦 🟦 🌻",
                            "🌻 🟦 🟦 🟦 🟦 🌻",
                            "🌻 🟦 🟦 🟦 🟦 🌻",
                            "🌻 🟦 🐝 🟦 🟦 🌻",
                            "🌻 🌻 🌻 🌻 🌻 🌻"
                        },
                        2, 4,
                        {"🟦", "🐞"},
                        "🐝",
                        "🐞"
                    };
            }
            break;
        case 2:
            switch (seleccion) {
                case 1:
                    return {
                        {
                            "🧱 🧱 🧱 🧱 🐭 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱",
                            "🧱 🧱 🧱 🧱 🔲 🔲 🔲 🧱 🧱 🧱 🧱 🧱 🧱",
                            "🧱 🔲 🔲 🔲 🧱 🧱 🔲 🧱 🔲 🔲 🔲 🔲 🧱",
                            "🧱 🔲 🧱 🔲 🔲 🔲 🔲 🧱 🧱 🧱 🧱 🔲 🧱",
                            "🧱 🔲 🧱 🧱 🧱 🧱 🧱 🧱 🔲 🔲 🔲 🔲 🧱",
                            "🧱 🔲 🔲 🔲 🧀 🔲 🔲 🔲 🔲 🧱 🔲 🧱 🧱",
                            "🧱 🧱 🔲 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🔲 🧱 🧱",
                            "🧱 🧱 🔲 🧱 🧱 🔲 🔲 🔲 🔲 🧱 🔲 🧱 🧱",
                            "🧱 🧱 🔲 🔲 🔲 🔲 🧱 🧱 🔲 🧱 🔲 🧱 🧱",
                            "🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🔲 🔲 🔲 🔲 🧱"
                        },
                        4, 0,
                        {"🔲", "🧀", "🐭"},
                        "🐭",
                        "🧀"
                    };
                case 2:
                    return {
                        {
                            "🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿 🌿",
                            "🐸 🟩 🟩 🟩 🟩 🟩 🟩 🌿 🟩 🟩 🌿",
                            "🌿 🌿 🌿 🟩 🌿 🌿 🟩 🌿 🌿 🟩 🌿",
                            "🌿 🌿 🌿 🟩 🌿 🌿 🟩 🟩 🟩 🟩 🌿",
                            "🌿 🟩 🟩 🟩 🌿 🌿 🌿 🌿 🟩 🌿 🌿",
                            "🌿 🟩 🌿 🌿 🌿 🌿 🟩 🟩 🟩 🟩 🌿",
                            "🌿 🟩 🌿 🌿 🌿 🟩 🟩 🌿 🌿 🌿 🌿",
                            "🌿 🟩 🌿 🌿 🟩 🟩 🌿 🌿 🟩 🟩 🌿",
                            "🌿 🟩 🐢 🌿 🟩 🌿 🌿 🌿 🌿 🟩 🌿"
                        },
                        0, 1,
                        {"🟩", "🐢"},
                        "🐸",
                        "🐢"
                    };
                case 3:
                    return {
                        {
                            "🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙",
                            "🌙 ⭐ 🌙 🌙 ⭐ ⭐ ⭐ 🌙 🌙 🌙",
                            "🌙 ⭐ 🌙 🌙 🌙 ⭐ 🐤 🌙 🌙 🌙",
                            "🌙 ⭐ ⭐ 🌙 ⭐ ⭐ 🌙 🌙 🌙 🌙",
                            "🌙 ⭐ 🌙 🌙 ⭐ 🌙 🌙 ⭐ ⭐ 🌙",
                            "🌙 ⭐ ⭐ 🌙 ⭐ ⭐ 🌙 🌙 ⭐ 🌙",
                            "🌙 🌙 ⭐ ⭐ 🌙 ⭐ 🌙 🌙 🌙 🌙",
                            "🌙 🌙 🌙 🌙 ⭐ ⭐ ⭐ ⭐ ⭐ 🐦",
                            "🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙 🌙"
                        },
                        6, 2,
                        {"⭐", "🐤", "🐦"},
                        "🐤",
                        "🐦"
                    };
            }
            break;
        case 3:
            switch (seleccion) {
                case 1:
                    return {
                        {
                            "0 0 0 0 0 0",
                            "0 1 F 1 1 0",
                            "0 1 1 1 1 0",
                            "0 1 1 1 1 0",
                            "0 1 1 Y 1 0",
                            "0 0 0 0 0 0"
                        },
                        3, 4,
                        {"1", "F", "Y"},
                        "Y",
                        "F"
                    };
                case 2:
                    return {
                        {
                            "🌻 🌻 🌻 🌻 🌻 🌻",
                            "🌻 🟦 🐞 🟦 🟦 🌻",
                            "🌻 🟦 🟦 🟦 🟦 🌻",
                            "🌻 🟦 🟦 🟦 🟦 🌻",
                            "🌻 🟦 🐝 🟦 🟦 🌻",
                            "🌻 🌻 🌻 🌻 🌻 🌻"
                        },
                        2, 4,
                        {"🟦", "🐞"},
                        "🐝",
                        "🐞"
                    };
                case 3:
                    return {
                        {
                            "🌿 🌿 🌿 🌿 🌿",
                            "🌿 🟩 🟩 🟩 🌿",
                            "🌿 🐢 ❎ 🟩 🌿",
                            "🌿 🟩 🟩 🟩 🌿",
                            "🌿 🐸 🟩 🟩 🌿",
                            "🌿 🌿 🌿 🌿 🌿"
                        },
                        1, 1,
                        {"🟩", "🐢"},
                        "🐸",
                        "🐢"
                    };
                case 4:
                    return {
                        {
                            "🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱",
                            "🧱 🧱 🔲 🔲 🧱 🔲 🔲 🧱 🧱",
                            "🧱 🔲 🔲 🔲 🔲 🔲 🔲 🔲 🧱",
                            "🧱 🔲 🔲 🔲 🔲 🔲 🔲 🔲 🧱",
                            "🧱 🧱 🔲 🔲 🧀 🔲 🔲 🧱 🧱",
                            "🧱 🔲 🔲 🔲 🔲 🔲 🔲 🔲 🧱",
                            "🧱 🔲 🔲 🔲 🔲 🔲 🔲 🔲 🧱",
                            "🧱 🧱 🔲 🔲 🐭 🔲 🔲 🧱 🧱",
                            "🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱 🧱"
                        },
                        4, 7,
                        {"🔲", "🧀", "🐭"},
                        "🐭",
                        "🧀"
                    };
                case 5:
                    return {
                        {
                            "🌙 🌙 🌙 🌙 🌙 🌙 🌙",
                            "🌙 🌙 ⭐ ⭐ ⭐ ⭐ 🌙",
                            "🌙 ⭐ ⭐ 🐤 ⭐ ⭐ 🌙",
                            "🌙 ⭐ 🌙 ⭐ ⭐ 🌙 🌙",
                            "🌙 ⭐ 🌙 ⭐ ⭐ ⭐ 🌙",
                            "🌙 🐦 🌙 ⭐ ⭐ ⭐ 🌙",
                            "🌙 🌙 🌙 🌙 🌙 🌙 🌙"
                        },
                        2, 2,
                        {"⭐", "🐤", "🐦"},
                        "🐤",
                        "🐦"
                    };
            }
            break;
    }

    cout << "Dificultad no válida. Se cargará el nivel fácil por defecto.\n";
    return obtenerMapa(1, 1);
}

// Función que convierte el mapa y empaqueta todos los datos
MazeData getMazeGrid(int dificultad, int mapaSeleccion) {
    MapaConInicio mapa = obtenerMapa(dificultad, mapaSeleccion);
    auto grid = convertirAMatriz(mapa.mapa);
    return { grid, mapa.inicioX, mapa.inicioY, mapa.caminosValidos, mapa.personaje, mapa.meta };
}

#endif
