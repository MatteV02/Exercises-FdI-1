#include "shapes.h"

int main(void)
{
	FILE* f = fopen("rect1.bin", "rb");

	if (f == NULL)
		return 1;

	struct rect temp;

	bool ret = rect_load(f, &temp);

	return 0;

}