#include "rational.h"

extern void rational_sum(struct rational* sum, const struct rational* first, const struct rational* second)
{
	struct rational temp;
	temp.num = first->num * second->den + first->den * second->num;

	if (temp.num != 0) {
		temp.den = first->den * second->den;

		unsigned int mcd_a = abs(temp.num), mcd_b = temp.den;

		while (mcd_b != 0) {
			unsigned int r = mcd_a % mcd_b;
			mcd_a = mcd_b;
			mcd_b = r;
		}

		temp.num /= mcd_a;
		temp.den /= mcd_a;

	}
	else {
		temp.den = 1;
	}

	*sum = temp;

}