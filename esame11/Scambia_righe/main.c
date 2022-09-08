#include "matrix.h"

int main(void)
{
	struct matrix mat = { 2,3, malloc(sizeof(double) * 2 * 3) };
	for (size_t i = 0; i < mat.M * mat.N; i++) {
		mat.data[i] = i + 1;
	}

	mat_swaprows(&mat, 0, 1);

	free(mat.data);

	return 0;
}