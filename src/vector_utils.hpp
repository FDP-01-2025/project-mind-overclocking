#ifndef VECTOR_UTILS_HPP
#define VECTOR_UTILS_HPP

#include <vector>
#include <string>
#include <sstream>

using namespace std;

vector<vector<string>> convertToMatrix(const vector<string>& map) {
    vector<vector<string>> grid;
    for (const auto& row : map) {
        vector<string> tokens;
        istringstream iss(row);
        string token;
        while (iss >> token) {
            tokens.push_back(token);
        }
        grid.push_back(tokens);
    }
    return grid;
}

#endif
