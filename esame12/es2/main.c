#include <stdlib.h>
#include "matrix.h"

int main(void)
{

	struct matrix mat = { 2, 3, malloc(sizeof(double) * mat.N * mat.M) };

	for (size_t i = 0; i < mat.M * mat.N; i++) {
		mat.data[i] = i + 1;
	}

	mat_swapcols(&mat, 0, 1);

	free(mat.data);

	return 0;
}