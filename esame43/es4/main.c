#include "matrix.h"

int main(void) {

	struct matrix src = { 3,3, malloc(sizeof(double) * src.rows * src.cols) };
	struct matrix dst = { 3,3, malloc(sizeof(double) * src.rows * src.cols) };

	for (size_t i = 0; i < src.cols * src.rows; i++) {
		dst.data[i] = i + 1;
		src.data[i] = src.cols * src.rows - i;
	}

	bool ret = scalar_mult(&dst, &src, 2, true);

	free(src.data);
	free(dst.data);

	return 0;

}