#include "matrix.h"

int main(void)
{
	struct matrix a = {
		2,3,
		malloc(sizeof(double) * a.M * a.N)
	};

	for (size_t i = 0; i < a.M * a.N; i++) {
		a.data[i] = i + 1;
	}

	struct matrix* ret = mat_replica(&a, 1);

	if (ret != NULL) {
		free(ret->data);
		free(ret);
	}

	return 0;
}