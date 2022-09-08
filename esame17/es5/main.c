#include "animazione.h"
#include "animazione.h"

int main(void)
{
	struct animation anim;

	int ret = anim_load("anim3.bin", &anim);

	if (ret != 0) {
		for (uint16_t i = 0; i < anim.num; i++) {
			free(anim.elems[i].values);
		}

		free(anim.elems);
	}

	return 0;
}