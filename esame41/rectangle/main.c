#include "rectangle.h"

int main(void) {
	FILE* f = fopen("file4.bin", "rb");
	struct rect r;
	
	bool ret = rect_load(f, &r);

	return 0;
}