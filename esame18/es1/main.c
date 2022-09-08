#include <stdlib.h>
#include <stdio.h>

extern unsigned int contalettere(const char* nomefile);

int main(void)
{
	unsigned int ret = contalettere("file1.txt");

	return 0;
}