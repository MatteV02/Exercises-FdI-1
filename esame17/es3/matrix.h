#if !defined MATRIX_H
#define MATRIX_H

#include <stdlib.h>

struct matrix {
    size_t M, N;
    double* data;
};

extern struct matrix* mat_replica(const struct matrix* a, int dir);

#endif // !defined MATRIX_H
