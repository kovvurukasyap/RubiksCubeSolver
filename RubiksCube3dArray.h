//
// Created by KASYAP on 21-06-2024.
//

#ifndef RUBIKSCUBE3DARRAY_H
#define RUBIKSCUBE3DARRAY_H

#include "RubiksCube.h"

class RubiksCube3dArray:public RubiksCube{
private:
    void rotateFace(int ind);

public:
    char cube[6][3][3]{};

    RubiksCube3dArray();

    COLOR getColor(FACE face, unsigned row, unsigned col) const override ;

    bool isSolved() const override;

    RubiksCube &u() override;

    RubiksCube &uPrime() override;

    RubiksCube &u2() override ;

    RubiksCube &l() override;

    RubiksCube &lPrime() override;

    RubiksCube &l2() override ;

    RubiksCube &f() override;

    RubiksCube &fPrime() override;

    RubiksCube &f2() override ;

    RubiksCube &r() override;

    RubiksCube &rPrime() override;

    RubiksCube &r2() override ;

    RubiksCube &b() override;

    RubiksCube &bPrime() override;

    RubiksCube &b2() override ;

    RubiksCube &d() override;

    RubiksCube &dPrime() override;

    RubiksCube &d2() override ;

    bool operator==(const RubiksCube3dArray &r1) const;

    RubiksCube3dArray &operator=(const RubiksCube3dArray &r1);
};



#endif //RUBIKSCUBE3DARRAY_H
