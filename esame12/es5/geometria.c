#include <stdlib.h>
#include <math.h>

struct punto {
    double x, y;
};

double distanza(struct punto* a, struct punto* b)
{
    if (a == NULL || b == NULL)
        return 0.;

    double ret = sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2));

    return ret;
}