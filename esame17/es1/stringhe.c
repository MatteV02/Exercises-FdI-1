#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

char* unici(const char* s)
{
	size_t ret_l = 1;
	char* ret = malloc(ret_l);

	for (size_t i = 0; s[i] != 0; i++) {
		bool ok = true;
		
		for (size_t j = 0; ret[j] != 0; j++) {
			if (ret[j] == s[i]) {
				ok = false;
				break;
			}
		}

		if (ok) {
			ret = realloc(ret, ret_l + 1);
			ret[ret_l - 1] = s[i];
			ret_l++;
		}
	}

	ret[ret_l - 1] = 0;

	return ret;
}