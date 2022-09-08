#include "matrix.h"

struct matrix* mat_rendiquadrata(const struct matrix* a)
{
	struct matrix* ret = malloc(sizeof(struct matrix));

	enum casi {
		OK, AGGIUNGI_COLONNE, AGGIUNGI_RIGHE
	};

	int caso;

	if (a->rows >= a->cols) {
		if (a->rows == a->cols) {
			caso = OK;
		}
		else {
			caso = AGGIUNGI_COLONNE;
		}
		ret->rows = a->rows;
		ret->cols = a->rows;
	}
	else {
		caso = AGGIUNGI_RIGHE;
		ret->rows = a->cols;
		ret->cols = a->cols;
	}
	ret->data = malloc(sizeof(double) * ret->rows * ret->cols);


	if (caso == AGGIUNGI_RIGHE || caso == OK) {

		for (size_t i = 0; i < a->cols * a->rows; i++) {
			ret->data[i] = a->data[i];
		}
		
		for (size_t i = a->rows * a->cols; i < ret->cols * ret->cols; i++) {
			ret->data[i] = 0;
		}
	}
	else if (caso == AGGIUNGI_COLONNE) {

		for (size_t i = 0; i < ret->rows; i++) {
			for (size_t j = 0; j < ret->cols; j++) {
				if (j < a->cols) {
					ret->data[i * ret->cols + j] = a->data[i * a->cols + j];
				}
				else {
					ret->data[i * ret->cols + j] = 0;
				}
			}
		}
	}

	return ret;

}