#include <stdlib.h>

#include "matrix.h"
#include "matrix.h"

int main(void)
{
	struct matrix m = { 
		3, 
		3, 
		malloc(sizeof(double) * m.rows * m.cols) 
	};

	for (size_t i = 0; i < m.cols * m.rows; i++) {
		m.data[i] = i + 1;
	}

	struct matrix* ret = mat_reset_cross(&m, 0, 1);

	if (ret != NULL && ret->data != NULL) {
		free(ret->data);
		free(ret);
	}

	return 0;
}