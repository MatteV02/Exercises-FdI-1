#include "stringhe.h"

int main(void)
{
	unsigned int pn;
	struct stringa* ret = read_stringhe_bin("stringhe1.bin", &pn);

	if (ret != NULL) {
		for (unsigned int i = 0; i < pn; i++) {
			if (ret[i].s != NULL) {
				free(ret[i].s);
			}
		}
		free(ret);
	}

	return 0;
}