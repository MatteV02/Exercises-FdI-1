#include "matrix.h"

int main(void)
{
	struct matrix mat = {
		2,3,
		malloc(sizeof(double) * mat.rows * mat.cols)
	};

	for (size_t i = 0; i < mat.cols * mat.rows; i++) {
		mat.data[i] = i + 1;
	}

	struct matrix* ret = mat_pad(&mat);

	free(ret->data);
	free(ret);

	return 0;
}