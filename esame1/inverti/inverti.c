#include <stdlib.h>

size_t n_cifre(unsigned int i) {
	size_t N_cifre = 1;
	while ((i /= 10) != 0) {
		N_cifre++;
	}

	return N_cifre;
}

unsigned int pow10(unsigned int e) {
	unsigned int r = 1;

	for (unsigned int i = 0; i < e; i++) {
		r *= 10;
	}

	return r;
}

unsigned int inverti(unsigned int i) {

	size_t N_cifre = n_cifre(i);

	unsigned int r = 0;
	for (size_t j = 0; j < N_cifre; j++) {
		r += (i % 10) * pow10(N_cifre - 1 - j);
		i /= 10;
	}

	return r;
}
