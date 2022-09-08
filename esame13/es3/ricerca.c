#include <stdlib.h>

int ricerca_binaria(const int* v, size_t n, int x)
{
	if (v == NULL || n == 0)
		return -1;

	size_t primo = 0, ultimo = n-1;

	do  {

		size_t temp = (ultimo - primo) / 2 + primo;

		if (v[temp] > x) {
			ultimo = temp;
		}
		else if (v[temp] < x) {
			primo = temp;
		}
		else {
			return (int)temp;
		}

	} while (ultimo - primo > 1);

	if (ultimo - primo == 1) {
		if (v[ultimo] == x)
			return ultimo;
	}

	return -1;

}