#include "matrix.h"

int main(void) {
	struct matrix m = { 3,5, malloc(sizeof(double) * m.rows * m.cols) };

	for (size_t i = 0; i < m.rows * m.cols; i++) {
		m.data[i] = i + 1;
	}

	struct matrix* ret = mat_replicate(&m);
	
	return 0;
}