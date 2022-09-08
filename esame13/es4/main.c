#include "stringhe.h"

int main(void)
{
	char *vet_str[] = { "Ciao", ", ", "come ", "stai?" };

	stringhe_scrivi("output.bin", vet_str, 4);

	return 0;
}