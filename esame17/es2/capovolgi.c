#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

int capovolgi(const char* filein, const char* fileout)
{
	int ret = 0;

	if (filein != NULL && fileout != NULL) {
		FILE* input = fopen(filein, "rb");
		if (input != NULL) {
			FILE* output = fopen(fileout, "wb");
			if (output != NULL) {
				uint8_t *vet = NULL;
				size_t vet_l = 0;

				while (1) {
					uint8_t temp;
					size_t ret_fread = fread(&temp, 1, 1, input);

					if (ret_fread != 1)
						break;

					vet = realloc(vet, vet_l + 1);
					vet[vet_l] = temp;
					vet_l++;
				}

				for (size_t i = vet_l; i > 0; i--) {
					fwrite(vet + i - 1, 1, 1, output);
				}

				ret = 1;
				free(vet);
				fclose(output);
			}

			fclose(input);
		}
	}

	return ret;
}