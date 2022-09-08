#if !defined VEC_DOUBLE_H
#define VEC_DOUBLE_H

#include <stdlib.h>
#include <stdint.h>

struct vec_double {
    uint32_t size;
    double* data;
};

extern struct vec_double* read_vec_double(const char* filename);

#endif