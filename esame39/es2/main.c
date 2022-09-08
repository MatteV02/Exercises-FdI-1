#include <stdlib.h>
#include <stdbool.h>

extern bool inverti_case(const char* nomefilein, const char* nomefileout);

int main(void)
{
	bool ret = inverti_case("in3", "output");

	return 0;
}