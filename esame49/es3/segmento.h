#if !defined SEGMENTO_H
#define SEGMENTO_H

#include <stdlib.h>

struct segmento {
    int a, b;
};

extern struct segmento* intersezione(struct segmento s1, struct segmento s2);

#endif // SEGMENTO_H
