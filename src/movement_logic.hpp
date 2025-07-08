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

char requestMove() {
    char input;
    cout << "\nMove player (W=up, A=left, S=down, D=right): ";
    cin >> input;
    return toupper(input);
}

bool canMoveTo(const string& cell, const set<string>& validPaths) {
    return validPaths.count(cell) > 0;
}

bool startGame(vector<vector<string>> grid, int startX, int startY,
               const set<string>& validPaths, const string& character, const string& goal) {

    vector<vector<string>> originalMap = grid;

    showPlayerInfo(character, goal);

    int playerX = startX, playerY = startY;

    grid[playerY][playerX] = character;

    bool gameOver = false;

    // Choose a valid traversable cell (ground) for replacement
    string replacementCell;

    // Try to pick a valid emoji that is not the character or the goal
    for (const auto& cell : validPaths) {
        if (cell != character && cell != goal) {
            replacementCell = cell;
            break;
        }
    }
    // If none found, use any (the first one)
    if (replacementCell.empty() && !validPaths.empty()) {
        replacementCell = *validPaths.begin();
    }

    while (!gameOver) {
        system("cls");
        printMap(grid);

        char move = requestMove();
        int newX = playerX, newY = playerY;

        switch (move) {
            case 'W': newY--; break;
            case 'A': newX--; break;
            case 'S': newY++; break;
            case 'D': newX++; break;
            default: continue;
        }

        if (newX < 0 || newX >= (int)grid[0].size() || newY < 0 || newY >= (int)grid.size()) {
            cout << "You can't leave the map! Press any key...";
            system("pause>nul");
            continue;
        }

        if (canMoveTo(grid[newY][newX], validPaths)) {
            // Replace previous player cell with the chosen traversable cell
            grid[playerY][playerX] = replacementCell;

            playerX = newX;
            playerY = newY;

            grid[playerY][playerX] = character;

            if (originalMap[playerY][playerX] == goal) {
                system("cls");
                printMap(grid);
                cout << "\nCongratulations! You reached the goal! 🎉\n";
                gameOver = true;
            }
        } else {
            cout << "You can't go there! Press any key...";
            system("pause>nul");
        }
    }

    return true;
}

#endif
