#include "tirocini.h"

int main(void) {

	FILE* f = fopen("input2.txt", "rt");
	struct tirocinio t;
	size_t i = 0;
	bool ret;

	do {
		ret = tirocinio_load(f, &t);
		i++;

		if (t.nome != NULL) {
			free(t.azienda1);
			t.azienda1 = NULL;
			free(t.azienda2);
			t.azienda2 = NULL;
			free(t.azienda3);
			t.azienda3 = NULL;
			free(t.nome);
			t.nome = NULL;
		}
	} while (ret);

	return 0;
}