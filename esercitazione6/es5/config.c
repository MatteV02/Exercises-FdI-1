#include "config.h"

#include <stdio.h>

struct keyval* read_config(const char* filename, size_t* n)
{
	if (filename == NULL || n == NULL)
		return NULL;

	FILE* f = fopen(filename, "r");
	if (f == NULL)
		return NULL;

	struct keyval* ret = NULL;
	size_t ret_l = 0;

	while (1) {
		struct keyval temp;
		int input, ret_scanf;

		while ((input = fgetc(f)) == ' ' || input == '\t');
		if (input < 0)
			break;

		if (input != '\n') {
			if (input == '#') {
				ret_scanf = fscanf(f, "%*[^\n]%*c");
				if (ret_scanf < 0)
					break;
			}
			else {

				ungetc(input, f);

				ret_scanf = fscanf(f, "%[^ \t]%*[ \t]=%*[ \t]%[^ \t\n]", temp.k, temp.v);
				if (ret_scanf < 0)
					break;

				if (ret_scanf == 2) {

					while ((input = fgetc(f)) == ' ' || input == '\t');
					if (input < 0)
						break;

					if (input == '\n') {
						ret = realloc(ret, sizeof(struct keyval) * (ret_l + 1));
						ret[ret_l] = temp;
						ret_l++;
					}
					else {
						ungetc(input, f);
						ret_scanf = fscanf(f, "%*[^\n]%*c");
						if (ret_scanf < 0)
							break;
					}
				}
				else {
					ret_scanf = fscanf(f, "%*[^\n]%*c");
					if (ret_scanf < 0)
						break;
				}
			}
		}
	}

	fclose(f);
	*n = ret_l;
	return ret;
}