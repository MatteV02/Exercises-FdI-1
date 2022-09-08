#include <stdlib.h>

struct punto {
    double x, y;
};

extern double distanza(struct punto* a, struct punto* b);

int main(void)
{

	struct punto a = { 4,7 }, b = { 2,2 };

	double ret = distanza(&a, &b);

	return 0;
}