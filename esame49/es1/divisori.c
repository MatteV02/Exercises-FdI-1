#include "divisori.h"

unsigned int conta_divisori(unsigned int num, unsigned int max)
{
	unsigned int ret = 0;

	for (unsigned int i = 1; i <= max && i <= num; i++) {
		if (num % i == 0) {
			ret++;
		}
	}

	return ret;

}