#ifndef PLAYER_PLACEMENT_HPP
#define PLAYER_PLACEMENT_HPP

#include <vector>
#include <string>

using namespace std;

string placeCharacter(vector<vector<string>>& grid, int x, int y, const string& character) {
    string originalCell = grid[y][x];
    grid[y][x] = character;
    return originalCell;
}

#endif
