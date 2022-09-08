#include <stdlib.h>

#include "matrix.h"

int main(void)
{
	struct matrix m = { 3,4,malloc(sizeof(double) * m.rows * m.cols) };

	for (size_t i = 0; i < m.rows * m.cols; i++) {
		m.data[i] = i+1;
	}

	size_t p[] = { 1, 2 , 0 };

	struct matrix* ret = mat_permute_rows(&m, p);

	free(ret->data);
	free(ret);

	return 0;
}