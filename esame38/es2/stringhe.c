#include "stringhe.h"

#include <string.h>

void elimina_consecutivi(char* str)
{
	if (str == NULL)
		return;

	char car_att = *str;

	if (car_att != 0) {
		int delta = 0;
		for (size_t i = 1; str[i-1] != 0; i++) {
			if (str[i] == car_att) {
				delta++;
			}
			else {
				car_att = str[i];
				if (delta != 0) {
					memmove(str + i - delta, str + i, strlen(str + i) + 1);
					i -= delta;
					delta = 0;
				}
			}
		}
	}

}