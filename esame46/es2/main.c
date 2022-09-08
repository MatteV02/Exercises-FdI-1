#include <stdlib.h>

extern size_t find_first_partition(const int* seq, size_t n);

int main(void)
{
	int v[] = { 1, 1, 4, 3, 6, 8, 10, 7, 9 };

	size_t ret = find_first_partition(v, 9);

	return 0;
}