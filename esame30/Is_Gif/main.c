#include "is_gif.h"

int main(void) {

	bool ret;

	ret = is_gif("bass.gif");
	ret = is_gif("beach.gif");
	ret = is_gif("flag.gif");
	ret = is_gif("mountains.gif");
	ret = is_gif(NULL);

	return NULL;
}