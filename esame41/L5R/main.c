#include <stdlib.h>

extern int roll_and_keep(const int* r, size_t x, size_t y);

int main(void)
{
	int r[] = { 9, 8, 2, 7, 1, 9 };

	int ret = roll_and_keep(r, 6, 3);

	return 0;
}