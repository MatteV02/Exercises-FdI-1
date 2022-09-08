#include <stdlib.h>

extern int ricerca_binaria(const int* v, size_t n, int x);

int main(void)
{

	int v[] = { 1,2 }; // { 1,2,3,4,5,6,7,8,9 };

	int ret = ricerca_binaria(v, sizeof(v) / sizeof(int), 1);

	return 0;
}