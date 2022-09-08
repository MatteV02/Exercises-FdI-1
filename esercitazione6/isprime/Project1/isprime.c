#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char* argv[])
{
	int ret = 1;

	if (argc == 2) {
		int n = strtol(argv[1], NULL, 10);

		if (n >= 0) {
			bool is_prime = false;
			if (n != 0 && n != 1)
			{
				is_prime = true;
				for (int i = 2; i <= sqrt(n); i++) {
					if (n % i == 0) {
						is_prime = false;
						break;
					}
				}
			}
			if (is_prime) {
				printf("true");
			}
			else {
				printf("false");
			}
			ret = 0;
		}
	}

	return ret;
}