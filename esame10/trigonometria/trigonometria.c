
double fattoriale(unsigned int i)
{
	double r = 1;
	while (i >= 2) {
		r *= i;
		i--;
	}

	return r;
}

double potenza(double x, unsigned int e)
{
	double r = 1;

	while (e != 0)
	{
		r *= x;
		e--;
	}

	return r;
}

double seno_iperbolico(double x)
{
	double r = 0, somma;
	
	unsigned int i = 0;

	do {
		somma = potenza(x, 2*i+1) / fattoriale(2*i+1);
		r += somma;
		i++;
	} while (r != (r + somma));

	return r;
}