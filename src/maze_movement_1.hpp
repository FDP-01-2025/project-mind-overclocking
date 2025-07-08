#ifndef MAZE_MOVEMENT_1_HPP
#define MAZE_MOVEMENT_1_HPP

#include <iostream>
#include <string>
#include <vector>
#include <set>
#include "vector_utils.hpp"

using namespace std;

struct MapWithStart {
    vector<string> map;
    int startX;
    int startY;
    set<string> validPaths;
    string character;
    string goal;
};

// New structure including goal
struct MazeData {
    vector<vector<string>> grid;
    int startX;
    int startY;
    set<string> validPaths;
    string character;
    string goal;
};

void showMapOptions() {
    cout << "\nSelect a difficulty:\n";
    cout << "1. Easy\n2. Medium\n3. Hard\n";
    cout << "Enter the difficulty number: ";
}

void showMapsByDifficulty(int difficulty) {
    switch (difficulty) {
        case 1:
            cout << "\nEasy Maps:\n1. Sunflower Garden\n2. Mini Garden\n";
            break;
        case 2:
            cout << "\nMedium Maps:\n1. Rats\n2. Green Friends\n3. Crumbs\n";
            break;
        case 3:
            cout << "\nHard Maps:\n1. Secrets 1\n2. Secrets 2\n3. Secrets 3\n4. Secrets 4\n5. Secrets 5\n";
            break;
        default:
            cout << "\nInvalid difficulty.\n";
            break;
    }
    cout << "Select the map (by number): ";
}

MapWithStart getMap(int difficulty, int selection) {
    switch (difficulty) {
        case 1:
            switch (selection) {
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
            switch (selection) {
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
                            "🌿 🟩 🌿 🌿 🌿 🟩 🟩 🌿 🌿 🟩 🌿",
                            "🌿 🟩 🌿 🌿 🟩 🟩 🌿 🌿 🟩 🟩 🌿",
                            "🌿 🟩 🟩 🟩 🟩 🌿 🌿 🌿 🟩 🐢 🌿"
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
            switch (selection) {
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
                            "🌻 🌻 🌻 🌻 🌻 🌻",
                            
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
                            "🌿 🐢 🟩 🟩 🌿",
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

    cout << "Invalid difficulty. Defaulting to easy level.\n";
    return getMap(1, 1);
}

// Converts the map and packs all the data
MazeData getMazeGrid(int difficulty, int mapSelection) {
    MapWithStart map = getMap(difficulty, mapSelection);
    auto grid = convertToMatrix(map.map);
    return { grid, map.startX, map.startY, map.validPaths, map.character, map.goal };
}

#endif
