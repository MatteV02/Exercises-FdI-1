#include <stdlib.h>
#include <stdint.h>

uint32_t MCD(uint32_t a, uint32_t b) {

	while (b != 0) {
		uint32_t r = a % b;
		a = b;
		b = r;
	}

	return a;
}

uint32_t vector_MCD(const uint32_t* v, size_t n)
{
	if (v == NULL || n == 0 || *v == 0)
		return 0;

	uint32_t ret = v[0];

	for (uint32_t i = 1; i < n; i++) {

		if (v[i] == 0)
			return 0;
		
		if (ret != 1)
			ret = MCD(ret, v[i]);

	}

	return ret;

}