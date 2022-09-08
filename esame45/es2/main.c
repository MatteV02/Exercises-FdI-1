#include <stdlib.h>
#include <stdint.h>

extern uint8_t* nonogram_row(const char* s, size_t* n);

int main(void)
{
	char s[] = "  *  *** ***    ****";
	size_t n;

	uint8_t* ret = nonogram_row(s, &n);

	free(ret);
	return 0;
}