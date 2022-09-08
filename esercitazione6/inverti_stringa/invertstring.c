#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
	if (argc == 2) {
		size_t str_l = strlen(argv[1]);

		char* str = malloc(str_l + 1);

		for (size_t i = 0; i < str_l; i++) {
			str[str_l - i - 1] = argv[1][i];
		}

		str[str_l] = 0;

		printf("%s", str);

		return 0;

	}
	else return 1;
}