#include "vettori.h"

int main(void) {
	FILE* f = fopen("vettori2.log", "rt");
	if (f == NULL)
		return 1;

	size_t n;
	struct vettore* ret = vettori_leggi(f, &n);

	if (ret != NULL) {
		for (size_t i = 0; i < n; i++) {
			if (ret[i].data != NULL) {
				free(ret[i].data);
			}
		}
		free(ret);
	}
	
	fclose(f);
	return 0;
}