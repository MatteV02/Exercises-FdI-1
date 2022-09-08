#include <stdlib.h>

#include "images.h"

int main(void)
{
	size_t n;

	struct image* ret = read_images("file1.txt", &n);

	if (ret != 0) {
		free(ret);
	}

	return 0;
}