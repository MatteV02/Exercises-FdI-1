#include <stdlib.h>
#include <string.h>

char* sottrai_stringhe(const char* a, const char* b)
{
	char* ret = NULL;
	
	if (a != NULL && b != NULL) {
		size_t ret_l = strlen(a) + 1,
			b_l = strlen(b) + 1;

		if (ret_l != 1 && b_l != 1) {
			ret = calloc(ret_l, 1);

			for (size_t i = ret_l - 1; i > 0; i--) {
				ret[i - 1] += a[i - 1] - '0';

				if (i > ret_l - b_l) {
					ret[i - 1] = ret[i - 1] - (b[b_l - ret_l + i - 1] - '0');
				}

				if (ret[i - 1] < 0) {
					ret[i - 1] = ret[i - 1] + 10;
					ret[i - 2]--;
				}

				ret[i - 1] += '0';
			}

			char* temp = ret;

			while (temp[1] != 0 && *temp == '0') {
				temp++;
			}
			
			if (temp != ret) {
				ret_l = strlen(temp) + 1;
				memmove(ret, temp, ret_l);
				ret = realloc(ret, ret_l);
			}
		}
	}

	return ret;
}