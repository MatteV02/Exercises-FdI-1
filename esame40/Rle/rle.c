#include "rle.h"

bool easy_rle_decode(const char* nomefilein, const char* nomefileout)
{
	if (nomefilein == NULL || nomefileout == NULL) {
		return false;
	}

	FILE* in = fopen(nomefilein, "rb");
	if (in == NULL) {
		return false;
	}

	FILE* out = fopen(nomefileout, "wb");
	if (out == NULL) {
		fclose(in);
		return false;
	}

	unsigned char n;
	char c;
	size_t ret;

	while (1) {

		ret = fread(&n, sizeof(n), 1, in);
		if (ret != 1) {
			fclose(in);
			fclose(out);
			return true;
		}

		ret = fread(&c, sizeof(c), 1, in);
		if (ret != 1) {
			fclose(in);
			fclose(out);
			return false;
		}

		for (unsigned int i = 0; i < (unsigned int)n + 1; i++) {
			fwrite(&c, 1, 1, out);
		}

	}
}