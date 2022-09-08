#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
	if (argc == 4) {
		double v[3];

		for (size_t i = 0; i < 3; i++) {
			v[i] = strtod(argv[i + 1], NULL);
			if (v[i] <= 0)
				return 1;
		}

		double r = sqrt((v[0] + v[1] + v[2]) * (-v[0] + v[1] + v[2]) * (v[0] - v[1] + v[2]) * (v[0] + v[1] - v[2])) / 4.;

		printf("%f", r);

		return 0;

	}
	else return 1;
}