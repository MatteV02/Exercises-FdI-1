#include "angoli.h"

int main(void)
{
	struct angolo a = { 70, 100, 100 };
	struct angolo b = { 9, 73, 90 };

	struct angolo ret;

	ret = somma_angoli(a, b);

	return 0;
}