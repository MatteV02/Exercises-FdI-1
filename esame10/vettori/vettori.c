#include <stdlib.h>
#include "vettori.h"

int vettore_leggi(FILE* f, struct vettore* v)
{
	if (f == NULL || v == NULL) {
		return 0;
	}

	if (fread(&(v->size), 1, 1, f) != 1) {
		return 0;
	}

	if (v->data == NULL) {
		v->data = malloc(v->size * sizeof(double));
		if (v->data == NULL)
			return 0;
	}

	size_t ret = 0;
	ret = fread(v->data, 8, v->size, f);
	if (ret != v->size) {
		v->data = realloc(v->data, ret * sizeof(double));
		return 0;
	}

	return 1;

}