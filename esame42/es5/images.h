#if !defined IMAGES_H
#define IMAGES_H

#include <stdlib.h>

struct image {
    char name[255];
    size_t height, width;
};

extern struct image* read_images(const char* filename, size_t* n);

#endif