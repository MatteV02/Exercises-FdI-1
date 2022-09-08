#if !defined STRINGHE_H
#define STRINGHE_H

#include <stdlib.h>

struct stringa {
    unsigned char length;
    char* s;
};

extern struct stringa* read_stringhe_bin(const char* filename, unsigned int* pn);

#endif