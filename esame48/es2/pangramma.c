#include <stdlib.h>
#include <stdbool.h>


bool is_pangram(const char* sentence)
{
	if (sentence == NULL)
		return false;

	bool ret[21] = { false };

	for (size_t i = 0; sentence[i] != 0; i++) {
		switch (sentence[i]) {
		case 'a': case 'A':
			ret[0] = true;
			break;
		case 'b': case 'B':
			ret[1] = true;
			break;
		case 'c': case 'C':
			ret[2] = true;
			break;
		case 'd': case 'D':
			ret[3] = true;
			break;
		case 'e': case 'E':
			ret[4] = true;
			break;
		case 'f': case 'F':
			ret[5] = true;
			break;
		case 'g': case 'G':
			ret[6] = true;
			break;
		case 'h': case 'H':
			ret[7] = true;
			break;
		case 'i': case 'I':
			ret[8] = true;
			break;
		case 'l': case 'L':
			ret[9] = true;
			break;
		case 'm': case 'M':
			ret[10] = true;
			break;
		case 'n': case 'N':
			ret[11] = true;
			break;
		case 'o': case 'O':
			ret[12] = true;
			break;
		case 'p': case 'P':
			ret[13] = true;
			break;
		case 'q': case 'Q':
			ret[14] = true;
			break;
		case 'r': case 'R':
			ret[15] = true;
			break;
		case 's': case 'S':
			ret[16] = true;
			break;
		case 't': case 'T':
			ret[17] = true;
			break;
		case 'u': case 'U':
			ret[18] = true;
			break;
		case 'v': case 'V':
			ret[19] = true;
			break;
		case 'Z': case 'z':
			ret[20] = true;
			break;
		default:
			break;
		}

		bool temp = true;
		
		for (size_t i = 0; i < 21; i++) {
			if (ret[i] == false) {
				temp = false;
				break;
			}
		}

		if (temp) {
			return true;
		}

	}

	return false;

}