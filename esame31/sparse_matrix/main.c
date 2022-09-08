#include <stdlib.h>
#include "sparse_matrix.h"

int main(void)
{

	struct sparse_matrix m = { 
		4, 4, 3,
		malloc(sizeof(uint32_t) * m.nnz), 
		malloc(sizeof(uint32_t) * m.nnz), 
		malloc(sizeof(double) * m.nnz) 
	};

	m.rowidxs[0] = 1;
	m.rowidxs[1] = 2;
	m.rowidxs[2] = 3;

	m.colidxs[0] = 1;
	m.colidxs[1] = 3;
	m.colidxs[2] = 2;

	m.data[0] = 7.;
	m.data[1] = 9.;
	m.data[2] = 5.;

	double ret = sm_get(&m, 4, 3);

	free(m.colidxs);
	free(m.rowidxs);
	free(m.data);

	return 0;
}