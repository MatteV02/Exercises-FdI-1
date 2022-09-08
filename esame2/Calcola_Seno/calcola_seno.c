double potenza_intera(double x, unsigned int e)
{
	double r = 1;

	while (e > 0) {
		r *= x;
		e--;
	}
	
	return r;
}

double fattoriale(unsigned int n)
{
	double r = 1;
	
	while (n > 1) {
		r *= n;
		n--;
	}

	return r;
}

double calcola_seno(double x)
{
	double r = 0, s_parziale;
	unsigned int i = 0;

	do {
		s_parziale = potenza_intera(x, 2 * i + 1) / fattoriale(2 * i + 1);
		if (i % 2 != 0) {
			s_parziale = -s_parziale;
		}

		i++;

		r += s_parziale;
	} while (r != r + s_parziale);
	
	return r;
}