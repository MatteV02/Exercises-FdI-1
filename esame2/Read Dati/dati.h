#if !defined DATI_H
#define DATI_H

struct dato {
    double valore;
    unsigned int classe;
};

extern struct dato* read_dati(const char* filename, unsigned int* pn);

#endif