#ifndef MAZE_HPP
#define MAZE_HPP

#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<vector<string>> getMazegGrid() {
    vector<string> map = {
        "🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻",
        "🌻 🌻 🟦 🟦 🟦 🌻 🟦 🟦 🌹 🌻",
        "🌻 🌻 🟦 🌻 🟦 🌻 🟦 🌻 🌻 🌻",
        "🌻 🌹 🟦 🌻 🟦 🌻 🟦 🌻 🌻 🌻",
        "🌻 🌻 🌻 🟦 🟦 🌻 🟦 🟦 🌹 🌻",
        "🌻 🌻 🟦 🟦 🌻 🌻 🟦 🌻 🌻 🌻",
        "🌻 🌻 🟦 🌻 🌻 🌻 🟦 🟦 🟦 🐞",
        "🌻 🌻 🟦 🟦 🟦 🟦 🟦 🌻 🌻 🌻",
        "🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻 🌻"
    };
    vector<vector<string>> grid;
    for (auto& row : map) {
        vector<string> tokens;
        size_t pos = 0;
        while (true) {
            size_t space = row.find(' ', pos);
            if (space == string::npos) {
                tokens.push_back(row.substr(pos));
                break;
            } else {
                tokens.push_back(row.substr(pos, space - pos));
                pos = space + 1;
            }
        }
        grid.push_back(tokens);
    }
    return grid;
}

void printMap(const vector<vector<string>>& grid) {
    for (const auto& row : grid) {
        for (const auto& cell : row) {
            cout << cell << ' ';
        }
        cout << '\n';
    }
}

#endif
