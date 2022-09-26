#ifndef MATRIX_H
#define MATRIX_H
#include <stdio.h>
struct matrix {
    size_t N, M;
    double* data;
};
extern void matrix_write(const struct matrix* matr, FILE* f);
#endif // !MATRIX_H

