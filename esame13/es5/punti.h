#if !defined PUNTI_H
#define PUNTI_H

#include <stdlib.h>
#include <stdio.h>

struct pixel {
    short x, y;
    unsigned char rgb[3];
};

extern struct pixel* read_pixels(FILE* f, size_t* n);

#endif