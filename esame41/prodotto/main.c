#include <stdlib.h>

extern int prodotto_altri_due(const int* v, size_t n);

int main(void) {

	int v[] = { 1, 12, 2, 3, 4, 5, 6 }; // 2, -3, -6, 7, 14 

	int ret = prodotto_altri_due(v, sizeof(v)/4);

	return 0;
}