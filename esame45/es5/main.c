#include "nonogram.h"

int main(void)
{
	struct nonogram ng;

	bool ret = nonogram_load(&ng, "nonogram2.txt");

	return 0;
}