#include "matrix.h"

bool matrix_read(struct matrix* m, FILE* f)
{

	if (f == NULL || m == NULL)
		return false;

	int ret_fscanf = fscanf(f, "%lu\n", &m->rows);

	if (ret_fscanf != 1)
		return false;

	ret_fscanf = fscanf(f, "%lu\n", &m->cols);

	if (ret_fscanf != 1)
		return false;

	m->data = malloc(sizeof(double) * m->rows * m->cols);

	for (size_t i = 0; i < m->rows*m->cols; i++) {
		ret_fscanf = fscanf(f, "%lf", m->data + i);
		if (ret_fscanf != 1)
			return false;
	}

	return true;

}