#include <stdlib.h>

extern void reverse(int* vec, size_t len, size_t from, size_t to);

int main(void)
{
	int vec[] = { 43, 14, 72, 48, 36, 33, 46, 75, 50, 86 };
	reverse(vec, 10, 0, 10);
	return 0;
}