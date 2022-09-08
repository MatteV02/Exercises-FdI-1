#include "matrix.h"

int main(void)
{
	struct matrix mat = {
		3,4,
		malloc(sizeof(double) * mat.rows * mat.cols)
	};

	for (size_t i = 0; i < mat.cols * mat.rows; i++) {
		mat.data[i] = i + 1;
	}

	int row_idxs[] = { 1, 2, -1 },
		col_idxs[] = { 0, 2, 3, -1 };

	struct matrix* ret = mat_submatrix(&mat, row_idxs, col_idxs);

	if (ret != NULL) {
		free(ret->data);
		free(ret);
	}

	return 0;
}