#include <stdlib.h>

extern int* rimuovi_multipli(const int* v, size_t size, size_t* newsize);

int main(void)
{
	int v[] = { 322, 336, 580, 558, 989, 78, 843, 210, 950, 73, 953, 804, 833, 969, 74, 170, 10, 399, 260, 227, 563, 829, 825, 871, 311, 922, 225, 129, 218, 303 };

	size_t ret_l;

	int* ret = rimuovi_multipli(v, sizeof(v) / sizeof(*v), &ret_l);

	free(ret);

	return 0;
}