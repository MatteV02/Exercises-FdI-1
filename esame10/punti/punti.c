#include <stdlib.h>
#include <math.h>

#include "punti.h"

int trova_piu_lontani(const struct punto3d* punti, size_t n, size_t* p1, size_t* p2)
{
	if (punti == NULL || p1 == NULL || p2 == NULL) {
		return 0;
	}

	if (n < 2) {
		return 0;
	}

	double d_max = 0;

	for (size_t i = 0; i < n - 1; i++) {
		for (size_t j = i + 1; j < n; j++) {
			double distanza_attuale = 
				sqrt(
					pow((punti[j].coord[0] - punti[i].coord[0]), 2) +
					pow((punti[j].coord[1] - punti[i].coord[1]), 2) +
					pow((punti[j].coord[2] - punti[i].coord[2]), 2)
				);
			if (distanza_attuale > d_max) {
				d_max = distanza_attuale;
				*p1 = i;
				*p2 = j;
			}
		}
	}

	return 1;

}
