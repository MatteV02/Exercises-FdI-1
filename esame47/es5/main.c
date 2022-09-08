#include "read_dvec.h"

int main(void)
{
	struct dvec* ret = read_dvec_comp("lungo.dvec");

	if (ret != NULL) {
		free(ret->d);
		free(ret);
	}

	return 0;
}