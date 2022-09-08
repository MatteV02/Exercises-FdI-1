#include <stdlib.h>
#include <string.h>

struct stringa {
	size_t ret_c, ret_l;
	char* ret;
};

void concatena(struct stringa* s, const char* app) {

	s->ret_l += strlen(app);
	if (s->ret_l > s->ret_c) {
		s->ret_c *= 2;

		s->ret = realloc(s->ret, s->ret_c);
	}

	strcat(s->ret, app);

}

char* codifica_morse(const char* testo)
{
	if (testo == NULL)
		return NULL;

	struct stringa ret = { 100, 0, malloc(ret.ret_c) };
	ret.ret[0] = 0;

	for (size_t i = 0; testo[i] != 0; i++) {
		switch (testo[i]) {
		case 'A':
			concatena(&ret, "._ ");
			break;
		case 'B':
			concatena(&ret, "_... ");
			break;
		case 'C':
			concatena(&ret, "_._. ");
			break;
		case 'D':
			concatena(&ret, "_.. ");
			break;
		case 'E':
			concatena(&ret, ". ");
			break;
		case 'F':
			concatena(&ret, ".._. ");
			break;
		case 'G':
			concatena(&ret, "__. ");
			break;
		case 'H':
			concatena(&ret, ".... ");
			break;
		case 'I':
			concatena(&ret, ".. ");
			break;
		case 'J':
			concatena(&ret, ".___ ");
			break;
		case 'K':
			concatena(&ret, "_._ ");
			break;
		case 'L':
			concatena(&ret, "._.. ");
			break;
		case 'M':
			concatena(&ret, "__ ");
			break;
		case 'N':
			concatena(&ret, "_. ");
			break;
		case 'O':
			concatena(&ret, "___ ");
			break;
		case 'P':
			concatena(&ret, ".__. ");
			break;
		case 'Q':
			concatena(&ret, "__._ ");
			break;
		case 'R':
			concatena(&ret, "._. ");
			break;
		case 'S':
			concatena(&ret, "... ");
			break;
		case 'T':
			concatena(&ret, "_ ");
			break;
		case 'U':
			concatena(&ret, ".._ ");
			break;
		case 'V':
			concatena(&ret, "..._ ");
			break;
		case 'W':
			concatena(&ret, ".__ ");
			break;
		case 'X':
			concatena(&ret, "_.._ ");
			break;
		case 'Y':
			concatena(&ret, "_.__ ");
			break;
		case 'Z':
			concatena(&ret, "__.. ");
			break;
		case ' ':
			concatena(&ret, "/ ");
			break;
		}
	}

	ret.ret[ret.ret_l - 1] = 0;
	ret.ret = realloc(ret.ret, ret.ret_l);

	return ret.ret;

}