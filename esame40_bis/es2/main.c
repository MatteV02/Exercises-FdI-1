#include "matrix.h"

int main(void)
{
	struct matrix m = {
		2,3,
		malloc(sizeof(double) * m.rows * m.cols)
	};

	for (size_t i = 0; i < m.cols * m.rows; i++) {
		m.data[i] = i + 1;
	}

	struct matrix* ret = mirror_mat(&m);

	if (ret != NULL)
	{
		free(ret->data);
		free(ret);
	}

	return 0;
}