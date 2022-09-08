extern double newton(double m1, double m2, double d)
{
	if (m1 <= 0 || m2 <= 0 || d <= 0) {
		return -1;
	}

	return 6.67259e-11 * m1 * m2 / (d * d);

}