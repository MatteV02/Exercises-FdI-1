#include "matrix.h"

int main(void)
{
	struct matrix m = {2, 3, NULL};
	m.data = malloc(sizeof(double) * m.rows * m.cols);

	for (size_t i = 0; i < m.rows; i++) {
		for (size_t j = 0; j < m.cols; j++) {
			m.data[i * m.cols + j] = i * m.cols + j + 1;
		}
	}

	struct matrix* p;
	p = mat_scale(&m, 7.);

	if (p != NULL) {
		if (p->data != NULL) {
			free(p->data);
		}
		free(p);
	}

	return 0;
}