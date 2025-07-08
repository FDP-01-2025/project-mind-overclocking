#ifndef MAIN_MENU_HPP
#define MAIN_MENU_HPP

#include <iostream>
#include <limits>
#include "maze_movement_1.hpp"
#include "movement_logic.hpp"

using namespace std;

void showCredits() {
    cout << "\n====================\n";
    cout << "✨ Credits ✨\n";
    cout << "Developed by: Mind Overclocking\n";
    system("pause");
}

// Validate main menu input
int showMainMenu() {
    int option;
    while (true) {
        cout << "\n==============================\n";
        cout << "🎮 WELCOME TO THE MAZE 🎮\n";
        cout << "==============================\n";
        cout << "1. Play\n";
        cout << "2. Credits\n";
        cout << "3. Exit\n";
        cout << "Select an option: ";
        cin >> option;

        if (cin.fail() || option < 1 || option > 3) {
            cin.clear();  // clear error
            cin.ignore(numeric_limits<streamsize>::max(), '\n');  // clear buffer
            cout << "Invalid option. Please try again.\n";
        } else {
            break;
        }
    }
    return option;
}

// Validate integer input within range
int requestNumberInRange(string message, int min, int max) {
    int value;
    while (true) {
        cout << message;
        cin >> value;

        if (cin.fail() || value < min || value > max) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid option. Please try again.\n";
        } else {
            break;
        }
    }
    return value;
}

void gameSelectionLoop() {
    int difficulty = 0;
    int mapSelection = 0;
    bool returnToMainMenu = false;

    while (!returnToMainMenu) {
        // Choose valid difficulty
        showMapOptions();
        difficulty = requestNumberInRange("Choose the difficulty: ", 1, 3);

        bool changeDifficulty = false;

        while (!changeDifficulty && !returnToMainMenu) {
            // Choose valid map
            showMapsByDifficulty(difficulty);
            mapSelection = requestNumberInRange("Select a map: ", 1, 5);

            // Run the game
            MazeData mazeWithStart = getMazeGrid(difficulty, mapSelection);
            bool won = startGame(
                mazeWithStart.grid,
                mazeWithStart.startX,
                mazeWithStart.startY,
                mazeWithStart.validPaths,
                mazeWithStart.character,
                mazeWithStart.goal
            );

            // Post-game menu
            int choice = requestNumberInRange(
                "\nWhat would you like to do next?\n"
                "1. Play another level of the same difficulty\n"
                "2. Change difficulty\n"
                "3. Return to main menu\n"
                "Select an option: ",
                1, 3
            );

            switch (choice) {
                case 1: break;
                case 2: changeDifficulty = true; break;
                case 3: returnToMainMenu = true; break;
            }
        }
    }
}

void startMainMenu() {
    bool exit = false;
    while (!exit) {
        int option = showMainMenu();
        switch (option) {
            case 1:
                gameSelectionLoop();
                break;
            case 2:
                showCredits();
                break;
            case 3:
                cout << "\nThanks for playing! 👋\n";
                exit = true;
                break;
        }
    }
}

#endif
