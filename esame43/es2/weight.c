#include "weight.h"

double ideal_weight(int h, int age, char sex, enum formula f)
{
	if (h < 0 || age < 0 || (sex != 'M' && sex != 'F') || f < 0 || f > 2) {
		return -1;
	}

	double ret;

	switch (f)
	{
	case lorenz:

		switch (sex)
		{
		case 'M':
			ret = h - 100 - (h - 150.) / 4;
			break;
		case 'F':
			ret = h - 100 - (h - 150.) / 2;
		}

		break;
	case berthean:

		ret = 0.8 * (h - 100.) + age / 2.;

		break;
	case keys:

		switch (sex)
		{
		case 'M':
			ret = (h / 100.) * (h / 100.) * 22.1;
			break;
		case 'F':
			ret = (h / 100.) * (h / 100.) * 20.6;
		}

		break;
	}

	return ret;

}