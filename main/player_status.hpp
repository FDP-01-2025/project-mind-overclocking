#ifndef PLAYER_STATUS_HPP
#define PLAYER_STATUS_HPP

#include <iostream>
#include <string>

using namespace std;

void mostrarInformacionDelJugador(const string& personaje, const string& meta) {
    cout << "============================================\n";
    cout << "🎮 Tú eres: " << personaje << "\n";
    cout << "🎯 Tu objetivo es llegar a: " << meta << "\n";
    cout << "Usa las teclas W A S D para moverte.\n";
    cout << "Presiona una tecla para comenzar...\n";
    cout << "============================================\n";
    system("pause>nul");
}

#endif
