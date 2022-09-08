#include "rapporti.h"

#include <stdio.h>
#include <stdbool.h>

struct rapporto* leggi_rapporti(const char* filename, uint16_t* n)
{
	struct rapporto* ret = NULL;
	if (n != NULL) {
		*n = 0;
		if (filename != NULL) {
			FILE* f = fopen(filename, "rb");
			if (f != NULL) {
				uint16_t temp;
				size_t ret_fread = fread(&temp, sizeof(temp), 1, f);
				if (ret_fread != 0) {
					bool successo = true;

					ret = malloc(sizeof(struct rapporto) * temp);

					for (uint16_t i = 0; i < temp; i++) {
						struct rapporto rapp_temp;
						ret_fread = fread(&rapp_temp.id, 2, 1, f);
						if (ret_fread == 0) {
							successo = false;
							break;
						}

						ret_fread = fread(&rapp_temp.tipo, 1, 1, f);
						if (ret_fread == 0) {
							successo = false;
							break;
						}

						ret_fread = fread(&rapp_temp.valore, sizeof(float), 1, f);
						if (ret_fread == 0) {
							successo = false;
							break;
						}

						ret[i] = rapp_temp;
					}

					if (successo) {
						*n = temp;
					}
					else {
						free(ret);
						ret = NULL;
					}
				}

				fclose(f);
			}
		}
	}

	return ret;
}