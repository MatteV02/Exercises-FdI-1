#include <stdlib.h>

void reverse(int* vec, size_t len, size_t from, size_t to)
{
	if (vec == NULL || from >=len || to > len || to < from)
		return;
	/*
	if (to < from) {
		size_t temp = from;
		from = to;
		to = temp;
	}
	*/

	for (size_t i = from; i < from + (to-from)/2; i++) {
		int temp = vec[i];
		vec[i] = vec[to - i + from - 1];
		vec[to - i + from - 1] = temp;
	}

}