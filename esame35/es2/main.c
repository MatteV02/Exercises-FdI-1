#include <stdlib.h>
#include <stdbool.h>

extern bool cifre_duplicate_hex(unsigned int n);

int main(void)
{
	bool ret = cifre_duplicate_hex(0x121);

	return 0;
}