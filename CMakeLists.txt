cmake_minimum_required(VERSION 3.28)
project(untitled)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled main.cpp
        RubiksCube.cpp
        RubiksCube.h
        RubiksCube3dArray.cpp
        RubiksCube3dArray.h
        RubiksCube1dArray.cpp
        RubiksCube1dArray.h
        DFSSolver.h
        BFSSolver.h
        IDFSSolver.h
        IDAstarSolver.h
        DataBases/math.cpp
        DataBases/math.h
        DataBases/NibbleArray.cpp
        DataBases/NibbleArray.h
        DataBases/PermutationIndexer.h
)
