#include "vec_double.h"

int main(void)
{
	struct vec_double* ret = read_vec_double("blaabl");

	if (ret != NULL) {
		free(ret->data);
		free(ret);
	}

	return 0;
}