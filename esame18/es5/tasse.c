#include <stdlib.h>

unsigned int irpef(unsigned int stipendio, 
	unsigned int* scaglioni, 
	unsigned int* aliquote, size_t n)
{
	unsigned int ret = 0;
	if (!(scaglioni == NULL || aliquote == NULL)) {

		for (size_t i = 1; i <= n && stipendio > scaglioni[i-1]; i++) {
			unsigned int temp;
			if (i == n || stipendio <= scaglioni[i]) {
				temp = stipendio;
			}
			else {
				temp = scaglioni[i];
			}

			ret += (temp - scaglioni[i - 1]) * 
				aliquote[i - 1] / 100;
		}

	}
	return ret;
}