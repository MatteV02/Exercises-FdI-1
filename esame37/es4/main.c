#include "rapporti.h"

int main(void)
{
	uint16_t n;

	struct rapporto* ret = leggi_rapporti("rapporto1.bin", &n);

	if (ret != NULL)
		free(ret);

	return 0;
}