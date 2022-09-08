#include "matrix.h"

int main(void)
{
	struct matrix m = {
		3,3,
		malloc(sizeof(double) * m.rows * m.cols)
	};

	for (size_t i = 0; i < m.cols * m.rows; i++) {
		m.data[i] = i + 1;
	}

	double *ret = matrix_snake(&m);

	free(ret);

	return 0;
}