#include "matrix.h"

int main(void)
{
	double values[] = { 1,2,3 };
	struct matrix* ret = mat_creatediag(values, 3);

	if (ret != NULL) {
		free(ret->data);
		free(ret);
	}

	return 0;
}