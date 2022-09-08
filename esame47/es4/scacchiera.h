#if !defined SCACCHIERA_H
#define SCACCHIERA_H

struct scacchiera {
    char caselle[64];
};

extern void stampa_scacchiera(const struct scacchiera* sc);

#endif