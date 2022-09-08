#include "animazione.h"

#include <stdio.h>

int anim_load(const char* filename, struct animation* anim)
{
	int ret = 0;

	if (filename != NULL && anim != NULL) {
		FILE* f = fopen(filename, "rb");
		if (f != NULL) {
			anim->num = 0;
			anim->elems = NULL;

			while (1) {
				struct elem temp;
				int ret_fread = fread(&temp.len, 2, 1, f);

				if (ret_fread != 1)
					break;

				temp.values = malloc(sizeof(uint8_t) * temp.len);
				ret_fread = fread(temp.values, 1, temp.len, f);

				if (ret_fread != temp.len) {
					free(temp.values);
					break;
				}

				anim->elems = realloc(anim->elems, sizeof(struct elem) * (anim->num + 1));
				anim->elems[anim->num] = temp;
				anim->num++;

			}

			ret = 1;
			fclose(f);
		}
	}

	return ret;
}