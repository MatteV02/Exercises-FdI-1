#include "bytearray.h"

int main(void)
{
	uint8_t a[] = {
		7,3,1
	}, b[] = {
		4,3,2
	};

	uint8_t* ret = absdiff(a, b, 3);

	if (ret != NULL) {
		free(ret);
	}

	return 0;
}