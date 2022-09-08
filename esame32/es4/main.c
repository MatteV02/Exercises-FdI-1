#include <stdlib.h>

#include "sequenza.h"

int main(void)
{
	struct seq s;

	bool ret = seq_load("seq2.bin", &s);

	free(s.values);

	return 0;
}