#include "punti_in_cerchio.h"

int main(void)
{
	struct punto v[] = { {5, 1}, {4, 3.7}, {6.3, 8} };

	size_t count;

	struct punto *r = punti_in_cerchio(v, 3, 6, &count);

	free(r);

	return 0;
}