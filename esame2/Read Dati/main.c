#include "dati.h"
#include <stdlib.h>

int main(void)
{
	unsigned int pn;
	struct dato* ret = read_dati("dati3.txt", &pn);

	if (ret != NULL) {
		free(ret);
	}

	return 0;
}