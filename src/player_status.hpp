#ifndef PLAYER_STATUS_HPP
#define PLAYER_STATUS_HPP

#include <iostream>
#include <string>

using namespace std;

void showPlayerInfo(const string& character, const string& goal) {
    cout << "============================================\n";
    cout << "🎮 You are: " << character << "\n";
    cout << "🎯 Your goal is to reach: " << goal << "\n";
    cout << "Use the W A S D keys to move.\n";
    cout << "Press any key to start...\n";
    cout << "============================================\n";
    system("pause>nul");
}

#endif
