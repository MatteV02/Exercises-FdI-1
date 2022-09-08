#include <stdlib.h>

unsigned int irpef(unsigned int stipendio, unsigned int* scaglioni,
    unsigned int* aliquote, size_t n)
{

    unsigned int ret = 0;

    for (size_t i = 0; i < n && stipendio > scaglioni[i]; i++) {
        unsigned int temp;
        if (i != n - 1 && stipendio > scaglioni[i + 1]) {
            temp = scaglioni[i + 1];
        }
        else {
            temp = stipendio;
        }
        temp -= scaglioni[i];
        ret += temp * aliquote[i] / 100;
    }

    return ret;

}