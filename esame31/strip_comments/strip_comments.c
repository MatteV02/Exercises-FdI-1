#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "strip_comments.h"

void strip_comments(const char* in_filename, const char* out_filename)
{
	if (in_filename == NULL || out_filename == NULL)
		return;

	FILE* in = fopen(in_filename, "r");
	if (in == NULL) {
		return;
	}

	FILE* out = fopen(out_filename, "w");
	if (out == NULL) {
		fclose(in);
		return;
	}

	int inizio_linea = 1, non_scrivere = 0;

	while (1) {
		int ret = fgetc(in);

		if (ret < 0)
			break;

		if (inizio_linea) {
			if (ret == '#') {
				non_scrivere = 1;
			}
			inizio_linea = 0;
		}

		if (non_scrivere == 0) {
			fputc(ret, out);
		}
		
		if (ret == '\n') {
			inizio_linea = 1;
			non_scrivere = 0;
		}

	}

	fclose(in);
	fclose(out);
}