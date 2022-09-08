#include <stdlib.h>

int* slicing(const int* v, size_t* n, size_t start, size_t end, int step)
{
	if (v == NULL || n == NULL || step == 0)
		return NULL;
	
	int* ret = NULL;
	size_t ret_l = 0;

	if (step > 0) {
		for (size_t i = start; i <= end; i += step) {
			ret = realloc(ret, (ret_l + 1) * sizeof(int));
			ret[ret_l] = v[i];
			ret_l++;
		}
	}
	else {
		for (size_t i = end; i >= start; i += step) {
			ret = realloc(ret, (ret_l + 1) * sizeof(int));
			ret[ret_l] = v[i];
			ret_l++;
		}
	}
	
	*n = ret_l;
	return ret;

}