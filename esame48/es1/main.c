#include <stdbool.h>

extern bool is_ugly(unsigned int num);

int main(void)
{
	bool ret = is_ugly(26);

	return 0;
}