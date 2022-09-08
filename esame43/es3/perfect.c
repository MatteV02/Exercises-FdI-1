#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <math.h>

struct uint32_vet {
	size_t capacity, length;
	uint32_t* data;
};

bool is_perfect(uint32_t n)
{
	bool ret = false;
	
	if (n != 1) {

		struct uint32_vet v = { 4, 1, malloc(sizeof(uint32_t) * v.capacity) };
		v.data[0] = 1;

		for (uint32_t i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				bool cond = i != sqrt(n);
				if (cond) {
					v.length += 2;
				}
				else {
					v.length++;
				}

				if (v.length > v.capacity) {
					v.capacity *= 2;
					v.data = realloc(v.data, sizeof(uint32_t) * v.capacity);
				}

				if (cond) {
					v.data[v.length - 2] = n / i;
				}

				v.data[v.length - 1] = i;
			}
		}

		v.data = realloc(v.data, sizeof(uint32_t) * v.length);

		uint32_t temp = 0;
		for (size_t i = 0; i < v.length; i++) {
			temp += v.data[i];
		}

		if (temp == n)
			ret = true;

		free(v.data);
	}

	return ret;
}