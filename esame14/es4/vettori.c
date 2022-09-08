#include "vettori.h"

struct vettore* vettori_leggi(FILE* f, size_t* n)
{
	if (f == NULL || n == NULL)
		return NULL;

	struct vettore* ret = NULL;
	size_t ret_l = 0;

	while (1) {
		struct vettore temp;
		int ret_fscanf;

		ret_fscanf = fscanf(f, "%lu", &temp.len);
		if (ret_fscanf != 1)
			break;

		if (temp.len != 0) {
			temp.data = malloc(sizeof(int) * temp.len);
		}
		else {
			temp.data = NULL;
		}

		for (size_t i = 0; i < temp.len; i++) {
			fscanf(f, "%i", temp.data + i);
		}

		ret = realloc(ret, sizeof(struct vettore) * (ret_l + 1));

		ret[ret_l] = temp;

		ret_l++;

	}

	*n = ret_l;
	return ret;

}