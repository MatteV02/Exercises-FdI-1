#include "matrix.h"

int main(void) {
	struct matrix a = {
		3,2,
		malloc(sizeof(double) * a.rows * a.cols)
	};

	for (size_t i = 0; i < a.cols * a.rows; i++) {
		a.data[i] = i + 1;
	}

	struct matrix* ret = mat_rendiquadrata(&a);

	if (ret != NULL) {
		if (ret->data != NULL) {
			free(ret->data);
		}
		free(ret);
	}

	return 0;
}