#include <ctype.h>
#include <stdlib.h>

int is_date(const char* s)
{
	if (s != NULL) {
		if (isdigit(s[0])) {
			if (isdigit(s[1])) {
				if (s[2] == '/') {
					if (isdigit(s[3])) {
						if (isdigit(s[4])) {
							if (s[5] == '/') {
								if (isdigit(s[6])) {
									if (isdigit(s[7])) {
										if (isdigit(s[8])) {
											if (isdigit(s[9])) {
												return 1;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	return 0;
}