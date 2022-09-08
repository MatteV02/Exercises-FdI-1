#include "complessi.h"

int main(void)
{
	FILE* in = fopen("complessi.txt", "rt");
	if (in == NULL)
		return 1;

	FILE* out = fopen("output.txt", "wt");
	if (out == NULL)
		return 1;

	struct complesso* vet = NULL;
	size_t vet_l = 0;

	struct complesso temp;

	while (read_complesso(&temp, in)) {
		vet = realloc(vet, sizeof(struct complesso) * (vet_l + 1));

		vet[vet_l].re = temp.re;
		vet[vet_l].im = temp.im;

		vet_l++;
	}

	for (size_t i = 0; (long long)i < (long long)vet_l - 1; i++) {
		temp.re = vet[i].re;
		temp.im = vet[i].im;

		prodotto_complesso(&temp, vet + i + 1);

		write_complesso(&temp, out);

	}

	free(vet);

	fclose(in);
	fclose(out);

	return 0;

}