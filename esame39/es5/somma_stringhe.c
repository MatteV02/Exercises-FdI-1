#include <stdlib.h>
#include <string.h>

char* somma_stringhe(const char* a, const char* b)
{
	if (a == NULL || b == NULL)
		return NULL;

	size_t a_len = strlen(a),
		b_len = strlen(b),
		ret_len;

	if (a_len >= b_len) {
		ret_len = a_len;
	}
	else {
		ret_len = b_len;
	}

	char* ret = malloc(ret_len + 1);
	memset(ret, 0, ret_len + 1);

	for (size_t i = 0; i < ret_len; i++) {

		char addendo1, addendo2;

		if (i < a_len) {
			addendo1 = a[a_len - i - 1] - '0';
		}
		else {
			addendo1 = 0;
		}

		if (i < b_len) {
			addendo2 = b[b_len - i - 1] - '0';
		}
		else {
			addendo2 = 0;
		}

		char temp = addendo1 + addendo2 + ret[ret_len - i - 1];
		
		ret[ret_len - i - 1] = temp % 10 + '0';

		if (temp >= 10) {
			if (i == ret_len - 1) {
				ret = realloc(ret, ret_len + 2);
				memmove(ret + 1, ret, ret_len + 1);
				ret[0] = '1';
			}
			else {
				ret[ret_len - i - 2] = 1;
			}
				
		}
	}

	return ret;
}