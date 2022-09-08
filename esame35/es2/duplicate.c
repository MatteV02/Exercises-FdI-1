#include <stdbool.h>
#include <stdlib.h>

struct vettore {
	size_t length;
	unsigned int* data;
};

bool cifre_duplicate_hex(unsigned int n)
{

	struct vettore v = {0, NULL};

	
	do {

		unsigned int temp = n % 16;

		for (size_t i = 0; i < v.length; i++) {
			if (v.data[i] == temp) {
				free(v.data);
				return true;
			}
		}

		v.data = realloc(v.data, sizeof(unsigned int) * (v.length + 1));

		v.data[v.length] = temp;

		v.length++;

	} while ((n /= 16) != 0);

	free(v.data);
	return false;

}