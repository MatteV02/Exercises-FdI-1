#include "matrix.h"

#define el(m, i, j) (m)->data[(i) * (m)->cols + (j)]

struct matrix* mat_submatrix(const struct matrix* mat,
    const int* row_idxs, const int* col_idxs)
{
    if (mat == NULL || row_idxs == NULL || col_idxs == NULL)
        return NULL;

    size_t ret_rows = 0, ret_cols = 0;

    while (row_idxs[ret_rows] >= 0) {
        if ((size_t)row_idxs[ret_rows] >= mat->rows) {
            return NULL;
        }
        ret_rows++;
        if (ret_rows > mat->rows) {
            return NULL;
        }
    }
    if (ret_rows == 0)
        return NULL;

    while (col_idxs[ret_cols] >= 0) {
        if ((size_t)col_idxs[ret_cols] >= mat->cols) {
            return NULL;
        }
        ret_cols++;
        if (ret_cols > mat->cols) {
            return NULL;
        }
    }
    if (ret_cols == 0)
        return NULL;

    struct matrix* ret = malloc(sizeof(struct matrix));
    ret->cols = ret_cols;
    ret->rows = ret_rows;
    ret->data = malloc(sizeof(double) * ret->rows * ret->cols);

    for (size_t i = 0; i < ret_rows; i++) {
        for (size_t j = 0; j < ret_cols; j++) {
            el(ret, i, j) = el(mat, row_idxs[i], col_idxs[j]);
        }
    }

    return ret;

}