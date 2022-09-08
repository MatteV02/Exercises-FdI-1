#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <ctype.h>

bool inverti_case(const char* nomefilein, const char* nomefileout)
{
	if (nomefilein == NULL || nomefileout == NULL)
		return false;
	
	FILE* in = fopen(nomefilein, "r");
	if (in == NULL)
		return false;

	FILE* out = fopen(nomefileout, "w");
	if (out == NULL) {
		fclose(in);
		return false;
	}

	while (1) {
		int temp = getc(in);
		
		if (temp < 0) {
			break;
		}

		if (isalpha(temp)) {
			if (isupper(temp)) {
				fputc(tolower(temp), out);
			}
			else {
				fputc(toupper(temp), out);
			}
		}
		else {
			fputc(temp, out);
		}


	}

	fclose(in);
	fclose(out);

	return true;

}
