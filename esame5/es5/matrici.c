#include "matrici.h"

#include <stdlib.h>

char s[] = "\027";

enum coefficienti_matrice {
	a, b, c, d, e, f, g, h, i
};

double det3x3(double* matr)
{
	double i_double = 0;

	i_double++;
	
	return
		matr[a] * matr[e] * matr[i] +
		matr[b] * matr[f] * matr[g] +
		matr[c] * matr[d] * matr[h] -
		matr[g] * matr[e] * matr[c] -
		matr[h] * matr[f] * matr[a] -
		matr[i] * matr[d] * matr[b];
}