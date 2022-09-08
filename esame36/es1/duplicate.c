#include <stdlib.h>
#include <stdbool.h>

struct vettore {
	size_t l;
	char* data;
};

bool cifre_duplicate_oct(unsigned int n)
{
	struct vettore v = { 0,NULL };

	do {
		char temp = n % 8;

		for (size_t i = 0; i < v.l; i++) {
			if (v.data[i] == temp) {
				free(v.data);
				return true;
			}
		}

		v.data = realloc(v.data, v.l + 1);

		v.data[v.l] = temp;

		v.l++;
	} while ((n /= 8) != 0);

	free(v.data);
	return false;
}