#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t N, M;
    double* data;
};

extern void mat_swapcols(struct matrix* mat, size_t c1, size_t c2);

#endif