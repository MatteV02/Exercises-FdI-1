#include "product.h"

int main(void)
{
	FILE* f = fopen("output.txt", "w");
	if (f == NULL)
		return 1;

	struct product list[] = {
		{"289347", "Pizza Margherita", 6},
		{"67832", "Chicken Nuggets", 5},
		{"563454", "Pizza Quattro Stagioni", 7}
	};

	write_products(f, list, 3);

	fclose(f);

	return 0;
}