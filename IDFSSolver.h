//
// Created by KASYAP on 22-06-2024.
//

#ifndef IDFSSOLVER_H
#define IDFSSOLVER_H

#include<bits/stdc++.h>
#include "RubiksCube.h"
#include "DFSSolver.h"

template<typename T>
class IDFSSolver {
private:
    int max_search_depth;
public:
    vector<RubiksCube::MOVE> moves;
    T rubiksCube;

    IDFSSolver(T _rubiksCube, int _max_search_depth = 8) {
        rubiksCube = _rubiksCube;
        max_search_depth = _max_search_depth;
    }

    vector<RubiksCube::MOVE> solve() {
        for (int i = 1; i <= max_search_depth; i++) {
            DFSSolver<T> dfsSolver(rubiksCube, i);
            moves = dfsSolver.solve();
            if (dfsSolver.rubiksCube.isSolved()) {
                rubiksCube = dfsSolver.rubiksCube;
                break;
            }
        }
        return moves;
    }
};

#endif //IDFSSOLVER_H
