#include <stdlib.h>
#include "decode.h"

int main(void)
{
	FILE* f = fopen("file2.txt", "r");
	if (f == NULL) {
		return EXIT_FAILURE;
	}

	decode(f);

	free(f);
	return EXIT_SUCCESS;
}