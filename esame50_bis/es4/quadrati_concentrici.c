#include <stdlib.h>
#include <stdio.h>

void prima_ultima_linea(int n) {
	for (int i = 0; i < 2 * n - 1; i++) {
		putchar('0' + n % 10);
		putchar(' ');
	}
	putchar('\n');
}

extern void stampa_quadrati_concentrici(int n)
{
	if (n > 0)
	{
		prima_ultima_linea(n);

		for (int i = 1; i < n; i++) {
			int temp = 1;
			for (int j = 0; j < 2 * n - 1; j++) {
				if (j < n) {
					if (j < i) {
						putchar((n - j) % 10 + '0');
						putchar(' ');
					}
					else {
						putchar((n - i) % 10 + '0');
						putchar(' ');
					}
				}
				else {
					if (j - n  < n- 1 - i) {
						putchar((n - i) % 10 + '0');
						putchar(' ');
					}
					else {
						putchar((n - i + temp) % 10 + '0');
						putchar(' ');
						temp++;
					}
				}
			}
			putchar('\n');
		}

		for (int i = n - 2; i > 0; i--) {
			int temp = 1;
			for (int j = 0; j < 2 * n - 1; j++) {
				if (j < n) {
					if (j < i) {
						putchar((n - j) % 10 + '0');
						putchar(' ');
					}
					else {
						putchar((n - i) % 10 + '0');
						putchar(' ');
					}
				}
				else {
					if (j - n < n - 1 - i) {
						putchar((n - i) % 10 + '0');
						putchar(' ');
					}
					else {
						putchar((n - i + temp) % 10 + '0');
						putchar(' ');
						temp++;
					}
				}
			}
		
			putchar('\n');
		}

		prima_ultima_linea(n);
	}


}