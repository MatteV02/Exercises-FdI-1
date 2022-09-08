#include "complessi.h"

int read_complesso(struct complesso* comp, FILE* f)
{
	if (comp == NULL || f == NULL)
		return 0;

	int ret = fscanf(f, "%lg %lg\n", &comp->re, &comp->im);

	if (ret == 2) {
		return 1;
	}
	else {
		return 0;
	}

}

void write_complesso(const struct complesso* comp, FILE* f)
{
	if (comp == NULL || f == NULL)
		return;

	fprintf(f, "%f %f\n", comp->re, comp->im);
}

void prodotto_complesso(struct complesso* comp1, const struct complesso* comp2)
{
	struct complesso temp;

	temp.re = comp1->re * comp2->re - comp1->im * comp2->im;
	temp.im = comp1->re * comp2->im - comp1->im * comp2->re;

	comp1->re = temp.re;
	comp1->im = temp.im;
}