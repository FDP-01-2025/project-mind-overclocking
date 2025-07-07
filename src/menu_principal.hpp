#ifndef MENU_PRINCIPAL_HPP
#define MENU_PRINCIPAL_HPP

#include <iostream>
#include <limits>
#include "maze_movement_1.hpp"
#include "movement_logic.hpp"

using namespace std;

void mostrarCreditos() {
    cout << "\n====================\n";
    cout << "✨ Créditos ✨\n";
    cout << "Desarrollado por: Mind Overclocking\n";
    system("pause");
}

// Validar entrada del menú principal
int mostrarMenuPrincipal() {
    int opcion;
    while (true) {
        cout << "\n==============================\n";
        cout << "🎮 BIENVENIDO AL LABERINTO 🎮\n";
        cout << "==============================\n";
        cout << "1. Jugar\n";
        cout << "2. Créditos\n";
        cout << "3. Salir\n";
        cout << "Selecciona una opción: ";
        cin >> opcion;

        if (cin.fail() || opcion < 1 || opcion > 3) {
            cin.clear();  // limpia error
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // limpia buffer
            cout << "Opción inválida. Intenta de nuevo.\n";
        } else {
            break;
        }
    }
    return opcion;
}

// Validación de número entero en rango
int pedirNumeroEnRango(string mensaje, int min, int max) {
    int valor;
    while (true) {
        cout << mensaje;
        cin >> valor;

        if (cin.fail() || valor < min || valor > max) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Opción inválida. Intenta de nuevo.\n";
        } else {
            break;
        }
    }
    return valor;
}

void bucleSeleccionDeJuego() {
    int dificultad = 0;
    int mapaSeleccion = 0;
    bool regresarAlMenuPrincipal = false;

    while (!regresarAlMenuPrincipal) {
        // Elegir dificultad válida
        mostrarOpcionesDeMapa();
        dificultad = pedirNumeroEnRango("Elige la dificultad: ", 1, 3);

        bool cambiarDificultad = false;

        while (!cambiarDificultad && !regresarAlMenuPrincipal) {
            // Elegir mapa válido
            mostrarMapasPorDificultad(dificultad);
            mapaSeleccion = pedirNumeroEnRango("Selecciona un mapa: ", 1, 5);

            // Ejecutar juego
            MazeData gridConInicio = getMazeGrid(dificultad, mapaSeleccion);
            bool gano = iniciarJuego(gridConInicio.grid,
                                     gridConInicio.inicioX,
                                     gridConInicio.inicioY,
                                     gridConInicio.caminosValidos,
                                     gridConInicio.personaje,
                                     gridConInicio.meta);

            // Menú post-juego
            int eleccion = pedirNumeroEnRango(
                "\n¿Qué deseas hacer ahora?\n"
                "1. Jugar otro nivel de la misma dificultad\n"
                "2. Cambiar dificultad\n"
                "3. Volver al menú principal\n"
                "Selecciona una opción: ",
                1, 3
            );

            switch (eleccion) {
                case 1: break;
                case 2: cambiarDificultad = true; break;
                case 3: regresarAlMenuPrincipal = true; break;
            }
        }
    }
}

void iniciarMenuPrincipal() {
    bool salir = false;
    while (!salir) {
        int opcion = mostrarMenuPrincipal();
        switch (opcion) {
            case 1:
                bucleSeleccionDeJuego();
                break;
            case 2:
                mostrarCreditos();
                break;
            case 3:
                cout << "\n¡Gracias por jugar! 👋\n";
                salir = true;
                break;
        }
    }
}

#endif
