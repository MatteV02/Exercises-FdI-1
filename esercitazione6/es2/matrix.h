#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t rows, cols;
    double* data;
};

extern struct matrix* mat_creatediag(const double* values, size_t n);

#endif // !defined MATRIX_H
