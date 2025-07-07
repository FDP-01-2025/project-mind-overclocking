#ifndef PLAYER_PLACEMENT_HPP
#define PLAYER_PLACEMENT_HPP

#include <vector>
#include <string>

using namespace std;

string colocarPersonaje(vector<vector<string>>& grid, int x, int y, const string& personaje) {
    string celdaOriginal = grid[y][x];
    grid[y][x] = personaje;
    return celdaOriginal;
}

#endif
