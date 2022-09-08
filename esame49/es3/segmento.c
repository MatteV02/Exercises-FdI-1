#include "segmento.h"

struct segmento* intersezione(struct segmento s1, struct segmento s2)
{
	struct segmento* ret = NULL;

	if (s1.a < s1.b && s2.a < s2.b) {
		if (s1.a <= s2.a && s2.a < s1.b) {
			ret = malloc(sizeof(struct segmento));

			if (s2.b >= s1.b) {
				ret->a = s2.a;
				ret->b = s1.b;
			}
			else {
				ret->a = s2.a;
				ret->b = s2.b;
			}
		}
		else if (s1.a < s2.b && s2.b <= s1.b) {
			ret = malloc(sizeof(struct segmento));

			if (s2.a <= s1.a) {
				ret->a = s1.a;
				ret->b = s2.b;
			}
		}
		else if (s1.a <= s2.a && s1.b >= s2.b) {
			ret = malloc(sizeof(struct segmento));

			ret->a = s2.a;
			ret->b = s2.b;
		}
		else if (s2.a <= s1.a && s2.b >= s1.b) {
			ret = malloc(sizeof(struct segmento));

			ret->a = s1.a;
			ret->b = s1.b;
		}
	}

	return ret;

}