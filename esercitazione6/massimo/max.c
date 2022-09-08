#include <stdlib.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	int ret = 1;

	if (argc != 1) {
		size_t n_elem = argc - 1;

		int massimo;

		for (size_t i = 1; i <= n_elem; i++) {
			char* p;
			int temp = strtol(argv[i], &p, 10);
			if (*p != 0)
				return ret;

			if (i == 1 || temp > massimo) {
				massimo = temp;
			}
		}

		printf("%i", massimo);
		ret = 0;
	}

	return ret;
}