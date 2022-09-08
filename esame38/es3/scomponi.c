#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(unsigned int n, unsigned int* divisore) 
{
	for (unsigned int i = 2; i < sqrt(n); i++) {
		if (n % i == 0) {
			*divisore = i;
			return false;
		}
	}

	return true;
}

void stampa_scomposizione(unsigned int n)
{
	if (n == 0) {
		printf("0");
		return;
	}
	else if (n == 1) {
		printf("1");
		return;
	}

	unsigned int divisore;

	while (!is_prime(n, &divisore)) {
		printf("%i", divisore);

		unsigned int count = 0;
		
		do {
			n /= divisore;
			count++;
		} while (n % divisore == 0);

		if (count != 1) {
			printf("^%i", count);
		}

		if (n == 1)
			return;

		printf(" * ");
	}
	printf("%i", n);

}