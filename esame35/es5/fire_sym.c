#include "fire_sym.h"

#include <string.h>

#define el(m, i, j) (m).data[(i)*(m).cols + (j)]
#define el_p(m, i, j) (m)->data[(i)*(m)->cols + (j)]

void propagate_fire(const struct forest* f)
{

	struct forest temp = {
		f->rows, f->cols,
		malloc(sizeof(char) * temp.cols * temp.rows)
	};

	memcpy(temp.data, f->data, f->cols * f->rows);

	for (size_t i = 0; i < temp.rows; i++) {
		for (size_t j = 0; j < temp.cols; j++) {
			if (el_p(f, i, j) == 'F') {
				if (i != 0) {
					if (el_p(f, i - 1, j) == '.') {
						el(temp, i - 1, j) = 'F';
					}
				}

				if (j != 0) {
					if (el_p(f, i, j - 1) == '.') {
						el(temp, i, j - 1) = 'F';
					}
				}

				if (i != temp.rows - 1) {
					if (el_p(f, i + 1, j) == '.') {
						el(temp, i + 1, j) = 'F';
					}
				}

				if (j != temp.cols - 1) {
					if (el_p(f, i, j + 1) == '.') {
						el(temp, i, j + 1) = 'F';
					}
				}
			}
		}
	}

	memcpy(f->data, temp.data, f->cols * f->rows);

	free(temp.data);

}