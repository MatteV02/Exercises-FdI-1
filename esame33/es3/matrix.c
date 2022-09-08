#include "matrix.h"

#define el(m, i, j) (m)->data[i * (m)->cols + j]

struct bmatrix* mat_boolean(const struct matrix* m, double rhs, enum comparisons cmp)
{
	if (m == NULL) {
		return NULL;
	}

	struct bmatrix* ret = malloc(sizeof(struct bmatrix));
	if (ret == NULL)
		return NULL;

	ret->cols = m->cols;
	ret->rows = m->rows;
	ret->data = malloc(sizeof(bool) * ret->cols * ret->rows);
	if (ret->data == NULL) {
		free(ret);
		return NULL;
	}

	for (size_t i = 0; i < ret->rows; i++) {
		for (size_t j = 0; j < ret->cols; j++) {
			switch (cmp)
			{
			case LT:
				el(ret, i, j) = el(m, i, j) < rhs;
				break;
			case LE:
				el(ret, i, j) = el(m, i, j) <= rhs;
				break;
			case EQ:
				el(ret, i, j) = el(m, i, j) == rhs;
				break;
			case NE:
				el(ret, i, j) = el(m, i, j) != rhs;
				break;
			case GE:
				el(ret, i, j) = el(m, i, j) >= rhs;
				break;
			case GT:
				el(ret, i, j) = el(m, i, j) > rhs;
				break;
			default:
				break;
			}
		}
	}

	return ret;

}

