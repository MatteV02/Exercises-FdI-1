#include "fire_sym.h"

#include <string.h>

int main(void)
{

	struct forest f = {
		10, 10,
		malloc(100)
	};

	memcpy(f.data, ".............................................FF.......FFF........F..................................", 100);

	propagate_fire(&f);

	return 0;

}