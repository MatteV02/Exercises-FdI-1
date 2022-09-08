#include <stdlib.h>
#include "vettori.h"

int main(void) 
{
	FILE* f = fopen("vettori3.bin", "rb");
	if (f == NULL) {
		return EXIT_FAILURE;
	}

	struct vettore v = { 0 };

	int ret = vettore_leggi(f, &v);

	free(v.data);
	fclose(f);

	return EXIT_SUCCESS;
}