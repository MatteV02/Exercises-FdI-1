#include <stdint.h>
#include <stdbool.h>

bool is_arithmetic(const int* v, size_t n)
{
	if (v == NULL || n <= 1)
		return false;

	int ret = v[0] - v[1];

	for (size_t i = 1; i < n - 1; i++) {
		int temp = v[i] - v[i + 1];

		if (temp != ret) {
			return false;
		}
	}

	return true;
}