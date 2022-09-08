#include <stdlib.h>

extern int is_date(const char* s);

int main(void)
{
	int ret = is_date("10/07/2015");

	return EXIT_SUCCESS;
}