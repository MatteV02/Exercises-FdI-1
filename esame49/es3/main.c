#include "segmento.h"

int main(void)
{
	struct segmento s1 = {
		1,3
	}, s2 = {
		5,7
	};

	struct segmento* ret = intersezione(s1, s2);

	if (ret != NULL)
		free(ret);

	return 0;
}