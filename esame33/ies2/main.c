#include <stdlib.h>

extern int* clamped(const int* v, size_t n, int min, int max);

int main(void)
{
	int v[] = { 1,2,3,4,5,6 };

	int* ret = clamped(v, sizeof(v) / sizeof(int), 2, 5);


	free(ret);
	return 0;
}