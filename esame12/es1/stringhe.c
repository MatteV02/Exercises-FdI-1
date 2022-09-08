#include <stdlib.h>
#include <string.h>

char* rimuovimultipli(const char* str)
{
	if (str == NULL)
		return NULL;

	size_t ret_l = strlen(str) + 1;
	char* ret = calloc(ret_l, 1);

	char temp = -1;
	for (size_t i = 0, j = 0; str[i] != 0; i++) {
		if (str[i] != temp) {
			temp = str[i];
			ret[j] = str[i];
			j++;
		}
		else {
			ret_l--;
		}
	}

	ret = realloc(ret, ret_l);

	return ret;

}