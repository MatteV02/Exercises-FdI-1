#if !defined CONFIG_H
#define CONFIG_H

#include <stdlib.h>

struct keyval {
    char k[256];
    char v[256];
};

extern struct keyval* read_config(const char* filename, size_t* n);

#endif // !defined CONFIG_H
