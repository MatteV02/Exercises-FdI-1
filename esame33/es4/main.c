#include "stringhe.h"

int main(void) {
	char* ret = title("ciao, come stai?");

	free(ret);
	return 0;
}