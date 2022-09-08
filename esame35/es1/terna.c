#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

bool is_terna_pitagorica(unsigned int v[3])
{
	if (v == NULL)
		return false;
	else if (pow(v[0], 2) == pow(v[1], 2) + pow(v[2], 2))
		return true;
	else if (pow(v[1], 2) == pow(v[0], 2) + pow(v[2], 2))
		return true;
	else if (pow(v[2], 2) == pow(v[1], 2) + pow(v[0], 2))
		return true;
	else
		return false;
}