#include "punti_in_cerchio.h"

int main(void)
{
	struct punto v[] = {
		{-105, 1},
		{-94, -13},
		{-63, 48},
		{63, 85.4},
		{45, 8.9},
		{96.7, -24.8},
		{0, 38}
	};

	size_t count;

	struct punto* ret = punti_in_cerchio(v, sizeof(v)/sizeof(*v), 100, &count);

	if (ret != NULL)
		free(ret);

	return 0;
 }