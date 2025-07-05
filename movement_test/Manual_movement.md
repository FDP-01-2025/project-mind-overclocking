# Manual del Programador — Juego de Movimiento en Mapa con Emojis
1. Introducción
Este proyecto implementa un juego en consola donde un personaje se mueve dentro de un mapa visualizado mediante emojis. El jugador, representado por una 🐝, debe recorrer caminos transitables (🟦) y llegar a una meta (🐞), usando teclas de dirección (W, A, S, D). El juego está diseñado para ejecutarse en sistemas Windows con soporte para salida en UTF-8.
2. Entorno de desarrollo
- Sistema operativo: Windows
- Compilador: Compatible con C++ (ej. MinGW, MSVC)
- Consola: CMD o terminal con soporte para UTF-8
- Codificación requerida: UTF-8 para mostrar correctamente los emojis

Librerías utilizadas:
windows.h: Configurar consola (UTF-8) y comandos del sistema
iostream: Entrada y salida estándar
vector: Manejo de estructuras dinámicas (matriz del mapa)
string: Manipulación de cadenas y emojis
cctype: Conversión de caracteres (uso de toupper())
maze_movement_1.hpp: Funciones auxiliares para cargar/imprimir el mapa
3. Estructura del proyecto
Archivos involucrados:
- PROYECTOF.cpp: Archivo principal. Contiene la lógica del juego, el flujo del programa y el control de movimiento.
- Maze.hpp: Archivo auxiliar. Proporciona las funciones getMazegGrid() y printMap() para manipular el mapa.
4. Convenciones de código
- Uso de nombres de variables claros y descriptivos (ej: playerX, gameOver, grid)
- Lógica modular: funciones separadas por propósito (pedirMovimiento, puedeMover)
- Inclusión de comentarios para cada paso del flujo
- Estilo de indentación consistente
- Uso de toupper() para normalizar entradas del usuario
5. Documentación de APIs (Funciones principales)
char pedirMovimiento()
- Propósito: Solicita al usuario la dirección de movimiento.
- Retorno: Devuelve el carácter en mayúscula correspondiente a la dirección (W, A, S, D).

bool puedeMover(const string& celda)
- Parámetro: celda — emoji de la celda objetivo
- Propósito: Determina si el jugador puede moverse a la celda indicada.
- Retorno: true si la celda es 🟦 o 🐞, false en otro caso.
6. Ejemplos de código
Configuración UTF-8 para consola (Windows):
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);

Movimiento del jugador:
char movimiento = pedirMovimiento();
movimiento = toupper(movimiento);
int nuevaX = playerX;
int nuevaY = playerY;
switch (movimiento) {
    case 'W': nuevaY--; break;
    case 'S': nuevaY++; break;
    case 'A': nuevaX--; break;
    case 'D': nuevaX++; break;
}

Resumen de símbolos en el mapa
Emoji | Significado
------|-------------------------------
🟦    | Camino transitable
🐝    | Personaje jugador
🐞    | Meta (objetivo del juego)
🌻    | Obstáculo (no se puede pisar)
🌹    | Puntos 
