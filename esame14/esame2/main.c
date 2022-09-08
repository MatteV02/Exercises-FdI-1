#include <stdlib.h>

extern int is_hex(const char* s);

int main(void)
{
	int ret = is_hex("0xAz");

	return 0;
}