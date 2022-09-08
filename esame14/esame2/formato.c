#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int is_hex(const char* s)
{
	int ret = 0;
	if (s != NULL) {
		int ret_sscanf, count;

		ret_sscanf = sscanf(s, "0%*1[xX]%*8[0123456789abcdefABCDEF]%n", &count);

		if (ret_sscanf >= 0 && count == (int)strlen(s))
			ret = 1;

	}

	return ret;

}