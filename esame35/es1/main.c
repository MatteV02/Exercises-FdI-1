#include <stdbool.h>

extern bool is_terna_pitagorica(unsigned int v[3]);

int main(void)
{
	unsigned int v[] = { 1,2,3 };

	bool ret = is_terna_pitagorica(v);

	return 0;
}