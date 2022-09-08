#include <stdlib.h>

extern int capovolgi(const char* filein, const char* fileout);

int main(void)
{
	int ret = capovolgi("file1", "output.bin");

	return 0;
}