#if !defined ANIMAZIONE_H
#define ANIMAZIONE_H

#include <stdlib.h>
#include <stdint.h>

struct elem {
    uint16_t len;
    uint8_t* values;
};
struct animation {
    uint16_t num;
    struct elem* elems;
};

extern int anim_load(const char* filename, struct animation* anim);

#endif // !defined
