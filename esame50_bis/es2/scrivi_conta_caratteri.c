#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int scrivi_conta_caratteri(FILE* f, const char* s)
{
	int ret = 0;
	if (f != NULL && s != NULL) {
		bool successo = true;
		while (s[ret] != 0) {
			int ret_fputc = fputc(s[ret], f);
			if (ret_fputc < 0) {
				successo = false;
				break;
			}
			ret++;
		}

		if (!successo) {
			ret = 0;
		}
		else {
			int ret_fputc = fputc('\n', f);
			if (ret_fputc < 0) {
				ret = 0;
			}
			else {
				for (int i = 1; i <= ret; i++) {
					ret_fputc = fputc(i % 10 + '0', f);
					if (ret_fputc < 0) {
						successo = false;
						break;
					}
				}
				if (!successo) {
					ret = 0;
				}
			}
		}
	}

	return ret;
}