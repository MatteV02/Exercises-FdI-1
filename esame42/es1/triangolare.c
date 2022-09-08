#include <stdbool.h>

bool triangolare(int n)
{
	if (n <= 0) {
		return false;
	}

	int r = 0;

	for (int i = 1; r < n; i++) {
		r += i;
		if (r == n) {
			return true;
		}
	}

	return false;

}