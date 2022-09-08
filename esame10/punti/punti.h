#if !defined PUNTI_H
#define PUNTI_H

#include <stdlib.h>

struct punto3d {
    double coord[3];
};

extern int trova_piu_lontani(const struct punto3d* punti, size_t n, size_t* p1, size_t* p2);

#endif