#include "audio.h"
#include <stdio.h>

int audio_read(const char* filename, struct audio* a)
{
	if (filename == NULL || a == NULL)
		return 0;

	FILE* f = fopen(filename, "rb");
	if (f == NULL)
		return 0;

	a->samples = 0;
	a->left = NULL;
	a->right = NULL;

	{
		short temp;
		while (fread(&temp, 2, 1, f) == 1) {
			a->samples++;
			a->left = realloc(a->left, sizeof(short) * a->samples);
			if (a->left == NULL) {
				fclose(f);
				return 0;
			}
			a->left[a->samples - 1] = temp;

			if (fread(&temp, 2, 1, f) != 1) {
				fclose(f);
				return 0;
			}

			a->right = realloc(a->right, sizeof(short) * a->samples);
			if (a->right == NULL) {
				fclose(f);
				return 0;
			}

			a->right[a->samples - 1] = temp;
		}
	}

	fclose(f);
	return 1;
}