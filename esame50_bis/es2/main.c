#include <stdlib.h>
#include <stdio.h>

extern int scrivi_conta_caratteri(FILE* f, const char* s);

int main(void)
{
	//FILE* f = fopen("output.txt", "w");
	//if (f == NULL)
	//	return 1;

	int ret = scrivi_conta_caratteri(stdout, "scrivimi su file per completare l'esercizio.");

	return 0;
}