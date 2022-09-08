#include <stdlib.h>

extern char* change_font(const char* s);

int main(void)
{
	char* ret = change_font("QUATTRO PAPERE VISITARONO SEI MUSEI");

	free(ret);
	return 0;
}