#include "matrix.h"

int main(void)
{
	struct matrix mat = { 
		2,3, 
		malloc(sizeof(double) * mat.M * mat.N) 
	};

	for (size_t i = 0; i < mat.M * mat.N; i++) {
		mat.data[i] = i + 1;
	}

	struct matrix* ret = mat_transpose(&mat);

	if (ret != NULL) {
		free(ret->data);
		free(ret);
	}

	return 0;

}