#if !defined PUNTI_IN_CERCHIO_H
#define PUNTI_IN_CERCHIO_H

#include <stdlib.h>

struct punto {
    double x, y;
};

extern struct punto* punti_in_cerchio(const struct punto* p, size_t n, double r, size_t* count);

#endif // !defined PUNTI_IN_CERCHIO_H
