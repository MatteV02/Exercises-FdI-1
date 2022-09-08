#include <stdbool.h>
#include <stdlib.h>

extern bool is_date(const char* s);

int main(void)
{
	bool ret = is_date("10/07/2015");

	return 0;
}