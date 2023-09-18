#include "ArrayOperation.h"
#include <cstdlib> 

int array1[] = { 1, 2, 3 };
int array2[] = { 1, 2, 3 };

namespace ArrayOperation {
    int Addition(const int* a, const int* b) {
        return (*a) + (*b);
    }

    int Subtraction(const int* a, const int* b) {
        return (*a) - (*b);
    }

    int LeftShift(const int* a, const int* n) {

        return (*a) << (*n);
    }
    int RightShift(const int* a, const int* n) {

        return (*a) >> (*n);
    }
    int Get(const int* a, const int* b) {
        return ((*a) + (*b)) / 2;
    }

    int RandomSelection(const int* a, const int* b) {
        if ((*a) <= (*b)) {
           
            return (*a) + std::rand() % ((*b) - (*a) + 1);
        }
        else {
            return 0;
        }
    }
}