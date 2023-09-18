#pragma once

extern int array1[];
extern int array2[];

namespace ArrayOperation {
    int Addition(const int* a, const int* b);
    int Subtraction(const int* a, const int* b);
    int LeftShift(const int* a, const int* n);
    int RightShift(const int* a, const int* n);
    int Get(const int* a, const int* b);
    int RandomSelection(const int* a, const int* b);
}