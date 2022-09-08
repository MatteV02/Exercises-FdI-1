#include <stdlib.h>
#include <stdio.h>

extern int scrivi_conta_caratteri(FILE* f, const char* s);

int main(void)
{
	FILE* f = fopen("output.txt", "wb");

	char s[] = "scrivimi su file per completare l'esercizio.";

	int r = scrivi_conta_caratteri(f, s);

	fclose(f);

	return 0;
}