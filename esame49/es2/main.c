#include "WTK.h"

int main(void)
{
	struct point p[] = { {5,1}, {4, 3.7}, {6.3, 8} };
	size_t ret = write_points(stdout, p, 3);

	return 0;
}