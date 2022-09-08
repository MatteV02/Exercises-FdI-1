#if !defined RATIONAL_H
#define RATIONAL_H

#include <stdlib.h>

struct rational {
    int num;
    unsigned int den;
};

extern void rational_sum(struct rational* sum, const struct rational* first, const struct rational* second);

#endif