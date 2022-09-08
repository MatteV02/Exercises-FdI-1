#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t N, M;
    double* data;
};

extern void mat_swaprows(struct matrix* mat, size_t r1, size_t r2);

#endif