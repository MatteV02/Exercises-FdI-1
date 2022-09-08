#if !defined RAPPORTI_H
#define RAPPORTI_H

#include <stdlib.h>
#include <stdint.h> // Necessario per il tipo uint16_t

struct rapporto {
    uint16_t id;
    char tipo;
    float valore;
};

extern struct rapporto* leggi_rapporti(const char* filename, uint16_t* n);

#endif