#include <stdlib.h>

#include "rectangle.h"

int main(void)
{
	struct rect r[] = { 
		{{1,2}, {3,4}}, 
		{{-9,-8}, {-7,-6}}, 
		{{-5,-4}, {-3,-2}} 
	}; //{{0,1}, {4, -1}}, {{3, 5}, {-3, 10}}

	int ret = find_largest(r, sizeof(r)/sizeof(struct rect));

	return 0;
}