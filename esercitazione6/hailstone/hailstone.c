#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int ret = -1;

	if (argc == 2) {
		char* p;
		int n = strtol(argv[1], &p, 10);
		ret = 0;

		if (*p == 0 && n > 0) {
			while (n != 1) {
				printf("%i, ", n);
				ret++;
				if (n % 2 == 0) {
					n /= 2;
				}
				else {
					n = 3 * n + 1;
				}
			}
			printf("1");
			ret++;
		}
	}

	return ret;
}