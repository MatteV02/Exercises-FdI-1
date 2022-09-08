#include <stdlib.h>
#include <math.h>

struct punto {
    double x, y;
};

extern void rotazione(struct punto* p, double alfa);

int main(void)
{
    struct punto p = { 1,2 };

    rotazione(&p, 3.14159/2);
    return 0;
}