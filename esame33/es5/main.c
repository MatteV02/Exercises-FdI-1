#include "tirocini.h"

int main(void) {

	FILE* f = fopen("input1.txt", "rt");
	struct tirocinio t;

	for (size_t i = 0; i < 6; i++) {
		bool ret = tirocinio_load(f, &t);

		free(t.azienda1);
		free(t.azienda2);
		free(t.azienda3);
		free(t.nome);
	}

	return 0;
}