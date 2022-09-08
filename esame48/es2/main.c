#include <stdlib.h>
#include <stdbool.h>

extern bool is_pangram(const char* sentence);

int main(void)
{
	bool ret = is_pangram("abcdefghilmnopqrtuvz");

	return 0;
}