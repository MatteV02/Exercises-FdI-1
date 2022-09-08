#include <stdlib.h>
#include <string.h>

char* sottrai_stringhe(const char* a, const char* b)
{
	if (a == NULL || b == NULL)
		return NULL;

	size_t a_ncifre = strlen(a);
	size_t b_ncifre = strlen(b);

	char* r = calloc(a_ncifre + 1, 1);

	char temp, riporto = 0;

	for (size_t i = 1; i <= a_ncifre; i++) {
		
		temp = a[a_ncifre - i] - riporto;
		if (b_ncifre >= i) {
			temp = temp - b[b_ncifre - i] + '0';
		}
		if (riporto == 1) {
			riporto = 0;
		}
		if (temp < '0') {
			riporto = 1;
			temp += 10;
		}

		r[a_ncifre - i] = temp;

	}

	char *prima_cifra = r;
	for (; *prima_cifra == '0'; prima_cifra++);

	size_t i = 0;
	while (prima_cifra[i] != 0) {
		r[i] = prima_cifra[i];
		i++;
	}
	r[i] = 0;

	r = realloc(r, a_ncifre - (prima_cifra - r) + 1);

	return r;
}