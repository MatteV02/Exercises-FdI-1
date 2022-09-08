#if !defined TIROCINI_H
#define TIROCINI_H

#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

struct tirocinio {
    char* nome;
    char* azienda1;
    char* azienda2;
    char* azienda3;
};

extern bool tirocinio_load(FILE* f, struct tirocinio* t);

#endif