#if !defined DATI_H
#define DATI_H

struct dato {
    double valore;
    unsigned int classe;
};

extern struct dato* read_dati(const char* filename, unsigned int* pn);
extern int salva_conteggio_bin(const char* filename, struct dato* pdati, unsigned int n);

#endif