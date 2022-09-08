#include <stdlib.h>
#include "path_split.h"

int main(void)
{
	char str[] = "c:\\user\\esami\\FdI2017\\esercizi\\file.txt";

	char* path = NULL, * filename = NULL;
	path_split(str, &path, &filename);

	if (path == NULL || filename == NULL) {
		free(path);
		free(filename);
	}

	return 0;
}