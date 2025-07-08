#include <iostream>

using namespace std;

// Limpiar pantalla con secuencia ANSI (funciona en terminales modernas)
void clearScreen() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    int x = 5;
    int y = 5;
    char input;

    while (true) {
        clearScreen();

        // Dibujar mapa 10x10 con 1 y 0
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                if (i == y && j == x)
                    cout << "1";  // Personaje
                else
                    cout << "0";  // Suelo
            }
            cout << endl;
        }

        cout << "Mover (w,a,s,d), salir (q): ";
        cin >> input;

        if (input == 'q') break;
        else if (input == 'w' && y > 0) y--;
        else if (input == 's' && y < 9) y++;
        else if (input == 'a' && x > 0) x--;
        else if (input == 'd' && x < 9) x++;
    }

    return 0;
}
