#include <stdlib.h>
#include <stdbool.h>

extern bool is_arithmetic(const int* v, size_t n);

int main(void)
{
	int v[] = { 9, 7, 5, 3 };

	bool ret = is_arithmetic(v, 4);

	return 0;
}