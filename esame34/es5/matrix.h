#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern bool matrix_read(struct matrix* m, FILE* f);

#endif