#include "read_file.h"

int main(void) {
	size_t cb;
	byte* r = read_file("prova.txt", &cb);

	return 0;
}