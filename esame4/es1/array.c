#include "array.h"

double media(double* arr, size_t n)
{
	if (arr == NULL)
		return 0;

	double ret = 0;

	for (size_t i = 0; i < n; i++) {
		ret += arr[i];
	}

	ret /= (double)n;

	return ret;

}