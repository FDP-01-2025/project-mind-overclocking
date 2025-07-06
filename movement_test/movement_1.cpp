#include <windows.h>
#include "movement_logic.hpp"  // Este incluye también maze_movement_1.hpp

int main() {
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    auto grid = getMazegGrid(); // Obtener el laberinto
    iniciarJuego(grid);         // Ejecutar el movimiento

    return 0;
}
