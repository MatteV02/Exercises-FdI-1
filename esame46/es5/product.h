#if !defined PRODUCT_H
#define PRODUCT_H

#include <stdlib.h>
#include <stdio.h>

struct product {
    char* productId;
    char* fullName;
    int price;
};

extern void write_products(FILE* f, const struct product* list, size_t n);

#endif