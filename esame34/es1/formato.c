#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool is_date(const char* s)
{
	bool ret = false;

	if (s != NULL) {
		int caratteri_letti = 0;
		
		int ret_sscanf = sscanf(s, "%*2[1234567890]/%*2[1234567890]/%*4[1234567890]%n", &caratteri_letti);

		if (ret_sscanf >= 0 && caratteri_letti == 10)
			ret = true;

	}

	return ret;
}

