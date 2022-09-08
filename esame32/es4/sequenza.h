#if !defined SEQUENZA_H
#define SEQUENZA_H

#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>

struct seq {
    size_t len;
    uint16_t* values;
};

extern bool seq_load(const char* filename, struct seq* s);

#endif