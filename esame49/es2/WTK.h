#if !defined WKT_H
#define WKT_H

#include <stdlib.h>
#include <stdio.h>

struct point {
    double x, y;
};

extern size_t write_points(FILE* f, const struct point* p, size_t n);

#endif // !defined WKT_H
