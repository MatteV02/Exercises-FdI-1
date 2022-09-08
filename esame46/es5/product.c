#include "product.h"

void write_products(FILE* f, const struct product* list, size_t n)
{
	if (f == NULL)
		return;

	fprintf(f, "[\n");

	for (size_t i = 0; i < n; i++) {
		if (list != NULL) {
			fprintf(f, "\t{\n");

			fprintf(f, "\t\t\"productId\": \"%s\",\n", list[i].productId);
			fprintf(f, "\t\t\"fullName\": \"%s\",\n", list[i].fullName);
			fprintf(f, "\t\t\"price\": %i\n", list[i].price);
			
			if (i != n - 1)
				fprintf(f, "\t},\n");
			else
				fprintf(f, "\t}\n");
		}
	}

	fprintf(f, "]");

}