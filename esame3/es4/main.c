#include "libri.h"

int main(void) {

	unsigned int pn;

	struct libro* ret = read_libri("libri2.txt", &pn);

	if (ret != NULL)
		free(ret);

	return 0;
}