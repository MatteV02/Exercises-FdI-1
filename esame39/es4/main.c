#include "matrix.h"

int main(void)
{
	struct matrix m = {
		3,3,
		malloc(sizeof(double) * m.rows * m.cols)
	};

	for (size_t i = 0; i < m.rows * m.cols; i++) {
		m.data[i] = i + 1;
	}

	struct matrix* ret = mat_delete_col(&m, 1);

	free(ret->data);
	free(ret);

	return 0;
}