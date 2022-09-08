#include "rle.h"

#include <stdio.h>
#include <stdint.h>

bool easy_rle_decode(const char* nomefilein, const char* nomefileout)
{
	bool ret = false;

	if (nomefilein != NULL && nomefileout != NULL) {
		FILE* input = fopen(nomefilein, "rb");
		if (input != NULL) {
			FILE* output = fopen(nomefileout, "wb");
			if (output != NULL) {
				while (1) {
					uint8_t ripeti;
					size_t ret_fread = fread(&ripeti, 1, 1, input);

					if (ret_fread == 1) {
						uint8_t scrivi;
						ret_fread = fread(&scrivi, 1, 1, input);
						if (ret_fread == 1) {
							for (unsigned int i = 0; i < (unsigned int)ripeti + 1; i++) {
								fwrite(&scrivi, 1, 1, output);
							}
						}
						else {
							break;
						}
					}
					else {
						break;
					}
				}

				ret = true;
				fclose(output);
			}

			fclose(input);
		}
	}

	return ret;
}