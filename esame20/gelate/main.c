#include <stdlib.h>

extern size_t gelate(const char* a, size_t n);

int main(void) 
{
	char
		a[] = { 4, 3, 3, -1, -4, -6 },
		b[] = { -9, -11, -5, -8, -3, -4 };

	size_t ret = gelate(a, sizeof(a));

	ret = gelate(b, sizeof(b));

	return EXIT_SUCCESS;
}