#include <stdlib.h>
#include <stdio.h>

int somma_cifre(int n) {
	int ret = 0;

	while (n > 0) {
		ret += n % 10;
		n /= 10;
	}

	return ret;
}

int main(int argc, char* argv[])
{
	if (argc != 2)
		return 1;

	int n = strtol(argv[1], NULL, 10);

	if (n < 0)
		return 1;

	while (n / 10 != 0) {
		n = somma_cifre(n);
	}

	printf("%i", n);

	return 0;
	
}