#include <stdlib.h>
#include "compress.h"

int main(void)
{

	struct dati d;

	int ret = dati_read("dati1.bin", &d);

	free(d.vals);

	return 0;
}