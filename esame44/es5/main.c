#include "variant.h"

int main(void)
{
	FILE* f = fopen("file2.variant", "rb");
	char type;
	void* val;

	while ((val = read_variant(f, &type)) != NULL) {
		free(val);
	}

	return 0;
}