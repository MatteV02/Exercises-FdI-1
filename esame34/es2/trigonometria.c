double fattoriale(unsigned int n) {
	double ret = 1;

	while (n >= 2) {
		ret *= n;
		n--;
	}

	return ret;
}

double potenza_intera(double b, unsigned int e) {
	double ret = 1;

	while (e > 0) {
		ret *= b;
		e--;
	}

	return ret;
}

double seno_iperbolico(double x)
{

	double ret = 0;
	double s_parz = 0;
	unsigned int i = 0;

	do {
		ret += s_parz;
		s_parz = potenza_intera(x, 2 * i + 1) / fattoriale(2 * i + 1);
		i++;
	} while ((ret + s_parz) != ret);

	return ret;

}