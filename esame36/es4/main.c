#include "shapes.h"

int main(void)
{
	struct line l;

	FILE* f = fopen("line1.bin", "rb");
	if (f == NULL)
		return 1;

	bool ret = line_load(f, &l);

	return 0;

}