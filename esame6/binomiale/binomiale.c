
static double FattorialeMod(unsigned int a, unsigned int stop) {
	double fatt = 1;
	while (a > stop)
	{
		fatt *= (a--);
	}
	return fatt;
}
double binomiale(unsigned int n, unsigned int k) {
	double ret = -1;
	if (n > 0 && k <= n) {
		double num = FattorialeMod(n, k);
		double den = FattorialeMod(n - k, 1);
		ret = num / den;
	}
	return ret;
}