//
// Created by KASYAP on 22-06-2024.
//

#ifndef DFSSOLVER_H
#define DFSSOLVER_H

#include<bits/stdc++.h>
#include "RubiksCube.h"

template<typename T>

class DFSSolver {
private:
    int max_search_depth;

    bool dfs(int dep) {
        if (rubiksCube.isSolved()) return true;
        if (dep > max_search_depth) return false;
        for (int i = 0; i < 18; i++) {
            rubiksCube.move(RubiksCube::MOVE(i));
            moves.push_back(RubiksCube::MOVE(i));
            if (dfs(dep + 1)) return true;
            moves.pop_back();
            rubiksCube.invert(RubiksCube::MOVE(i));
        }
        return false;
    }

public:
    vector<RubiksCube::MOVE> moves;
    T rubiksCube;
    DFSSolver(T _rubiksCube, int _max_search_depth = 10) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }
    vector<RubiksCube::MOVE> solve() {
        dfs(1);
        return moves;
    }
};



#endif //DFSSOLVER_H
