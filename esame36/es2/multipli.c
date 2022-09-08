#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct vettore {
	size_t l;
	int* data;
};

//int cmp_int(const void* a, const void* b) {
//	if (*((int*)a) < *((int*)b)) {
//		return -1;
//	}
//	else if (*((int*)a) > *((int*)b)) {
//		return 1;
//	}
//	else {
//		return 0;
//	}
//}

int* rimuovi_multipli(const int* v, size_t size, size_t* newsize)
{
	if (newsize == NULL) {
		return NULL;
	}

	if (v == NULL) {
		*newsize = 0;
		return NULL;
	}

	struct vettore ret = { 0, NULL };

	//int* v_temp = malloc(sizeof(int) * size);

	//memcpy(v_temp, v, sizeof(int) * size);

	//qsort(v_temp, size, sizeof(int), cmp_int);

	for (size_t i = 0; i < size; i++) {
		int temp = v[i];

		bool aggiungi = true;

		for (size_t j = 0; j < size; j++) {
			if (aggiungi) {
				if (j != i) {
					for (int k = 0; k * v[j] <= temp; k++) {
						if (k * v[j] == temp) {
							aggiungi = false;
							break;
						}
					}
				}
			}
			else break;
		}

		if (aggiungi) {
			ret.data = realloc(ret.data, sizeof(int) * (ret.l + 1));
			ret.data[ret.l] = temp;
			ret.l++;
		}
	}
	
	//free(v_temp);
	*newsize = ret.l;
	return ret.data;

}