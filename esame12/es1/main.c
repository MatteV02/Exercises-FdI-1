#include <stdlib.h>

extern char* rimuovimultipli(const char* str);

int main(void)
{
	char* ret = rimuovimultipli("multtttttttttttipli!!!!!!!!!");

	free(ret);

	return 0;
}