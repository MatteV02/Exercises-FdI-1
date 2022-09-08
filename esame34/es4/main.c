#include "rational.h"

int main(void) 
{
	struct rational sum, first = { -123, 7 }, second = { -461, 295 };

	rational_sum(&sum, &first, &second);

	return 0;
}