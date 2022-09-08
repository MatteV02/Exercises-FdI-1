#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include "path_split.h"

void path_split(const char* str, char** path, char** filename)
{
	if (str == NULL || path == NULL || filename == NULL) {
		if (path != NULL && filename != NULL) {
			*path = NULL, * filename = NULL;
		}
		return;
	}

	size_t str_l = strlen(str) + 1;
	size_t path_l = str_l, filename_l = 1;

	int64_t i;
	for (i = str_l - 2; i >= 0 && str[i] != '\\'; i--) {
		path_l--;
		filename_l++;
	}

	*path = calloc(path_l, 1);
	*filename = calloc(filename_l, 1);

	strncpy(*path, str, path_l - 1);
	strncpy(*filename, str + i + 1, filename_l - 1);

}