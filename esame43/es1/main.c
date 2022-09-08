#include "cerchio.h"

int main(void) {

	struct punto p = { 9,0 };
	struct cerchio c = { 0, 0, 9 };

	bool ret = nel_cerchio(&p, &c);

	return 0;

}