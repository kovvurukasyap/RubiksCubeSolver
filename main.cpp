
#include<bits/stdc++.h>
#include "RubiksCube1dArray.h"
#include "RubiksCube3dArray.h"
#include "DFSSolver.h"

int main() {
    // RubiksCube3dArray object3DArray;
    // object3DArray.print();
    // if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    //    else cout << "NOT SOLVED\n\n";

    //object3DArray.u();
    // object3DArray.uPrime();
    // object3DArray.u2();
    //
    // object3DArray.l();
    // object3DArray.lPrime();
    // object3DArray.l2();
    //
    // object3DArray.f();
    // object3DArray.fPrime();
    // object3DArray.f2();
    //
    // object3DArray.r();
    // object3DArray.rPrime();
    // object3DArray.r2();
    //
    // object3DArray.b();
    // object3DArray.bPrime();
    // object3DArray.b2();
    //
    // object3DArray.d();
    // object3DArray.dPrime();
    // object3DArray.d2();

    // object3DArray.print();
    // if (object3DArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";

    // RubiksCube3dArray cube1;
    // RubiksCube3dArray cube2;
    // if(cube1 == cube2) cout << "Is equal\n";
    //    else cout << "Not Equal\n";
    // cube1.randomShuffleCube(1);
    // if(cube1 == cube2) cout << "Is equal\n";
    //     else cout << "Not Equal\n";
    // cube2 = cube1;
    // if(cube1 == cube2) cout << "Is equal\n";
    //     else cout << "Not Equal\n";


    //RubiksCube1dArray object1DArray;
    //object1DArray.print();
    // if (object1DArray.isSolved()) cout << "SOLVED\n\n";
    //    else cout << "NOT SOLVED\n\n";

    //object1DArray.u();
    // object1DArray.uPrime();
    // object1DArray.u2();
    //
    // object1DArray.l();
    // object1DArray.lPrime();
    // object1DArray.l2();
    //
    // object1DArray.f();
    // object1DArray.fPrime();
    // object1DArray.f2();
    //
    // object1DArray.r();
    // object1DArray.rPrime();
    // object1DArray.r2();
    //
    // object1DArray.b();
    // object1DArray.bPrime();
    // object1DArray.b2();
    //
    // object1DArray.d();
    // object1DArray.dPrime();
    // object1DArray.d2();

    // object1DArray.print();
    // if (object1DArray.isSolved()) cout << "SOLVED\n\n";
    // else cout << "NOT SOLVED\n\n";

    // RubiksCube1dArray cube1;
    // RubiksCube1dArray cube2;
    // if(cube1 == cube2) cout << "Is equal\n";
    //    else cout << "Not Equal\n";
    // cube1.randomShuffleCube(1);
    // if(cube1 == cube2) cout << "Is equal\n";
    //     else cout << "Not Equal\n";
    // cube2 = cube1;
    // if(cube1 == cube2) cout << "Is equal\n";
    //     else cout << "Not Equal\n";

    RubiksCube3dArray cube;
    cube.print();

    vector<RubiksCube::MOVE> shuffle_moves = cube.randomShuffleCube(6);
    for (auto move: shuffle_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    cube.print();

    DFSSolver<RubiksCube3dArray> dfsSolver(cube, 8);
    vector<RubiksCube::MOVE> solve_moves = dfsSolver.solve();

    for (auto move: solve_moves) cout << cube.getMove(move) << " ";
    cout << "\n";
    dfsSolver.rubiksCube.print();

    return 0;
}
