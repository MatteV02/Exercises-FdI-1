#include "matrix.h"

#define el(m, i, j) (m).data[(i)*(m).cols + (j)]

int main(void)
{
	struct matrix m = { 1, 3, NULL };

	m.data = malloc(sizeof(double) * m.rows * m.cols);

	for (size_t i = 0; i < m.rows; i++) {
		for (size_t j = 0; j < m.cols; j++) {
			el(m, i, j) = (i) * m.cols + (j) + 1;
		}
	}

	struct matrix* r = mirror_mat(&m);

	if (r != NULL) {
		if (r->data != NULL)
			free(r->data);
		free(r);
	}

	return 0;
}