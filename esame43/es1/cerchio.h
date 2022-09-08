#if !defined CERCHIO_H
#define CERCHIO_H

#include <stdlib.h>
#include <stdbool.h>

struct punto {
    double x, y;
};
struct cerchio {
    double x, y, r;
};

extern bool nel_cerchio(const struct punto* p, const struct cerchio* c);

#endif