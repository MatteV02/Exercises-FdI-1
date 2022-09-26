#include "array.h"

void array_remove(double* arr, size_t* pn, size_t pos) {
	if (pos < *pn) {
		for (size_t i = pos + 1; i < *pn; ++i) {
			arr[i - 1] = arr[i];
		}
		(*pn)--;
	}
	return;
}