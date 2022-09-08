#include <stdlib.h>

extern int* rotate(const int* vec, size_t len, size_t r);

int main(void) {
	int v[] = { 1,2,3,4 };

	int* p = rotate(v, sizeof(v) / sizeof(int), 5);

	free(p);
	return 0;
}