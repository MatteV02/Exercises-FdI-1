#include <stdlib.h>

extern int* slicing(const int* v, size_t* n, size_t start, size_t end, int step);

int main(void)
{
	int v[] = { 1,2,3,4,5,6,7,8 };
	size_t n = 8, ret_l = n;

	int* ret = slicing(v, &ret_l, 2, 6, -1);

	free(ret);

	return 0;
}