#include "punti.h"

int main(void)
{
	struct punto3d v[3] = { 
		{{4,4,4}}, 
		{{5,5,5}}, 
		{{6,6,6}} 
	};

	size_t p1, p2;
	int r = trova_piu_lontani(v, 3, &p1, &p2);

	return EXIT_SUCCESS;
}