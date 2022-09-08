#include "audio.h"

int main(void)
{
	struct audio a;

	int ret = audio_read("audio.raw", &a);

	if (a.left != NULL)
		free(a.left);
	if (a.right != NULL)
		free(a.right);

	return 0;
}