#include "matrix.h"

int main(void)
{
	FILE* f = fopen("A.txt", "r");

	struct matrix m;
	bool ret = matrix_read(&m, f);

	return 0;

}