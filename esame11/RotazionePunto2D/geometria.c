#include <stdlib.h>
#include <math.h>

struct punto {
    double x, y;
};

void rotazione(struct punto* p, double alfa)
{
    if (p == NULL) {
        return;
    }

    double x_temp = p->x, y_temp = p->y;

    p->x = x_temp * cos(alfa) - y_temp * sin(alfa);
    p->y = x_temp * sin(alfa) + y_temp * cos(alfa);

}