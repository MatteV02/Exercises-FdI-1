#include "config.h"

int main(void)
{
	size_t n;
	struct keyval* ret = read_config("config1.txt", &n);

	return 0;
}