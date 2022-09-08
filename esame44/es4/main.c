#include <stdlib.h>

extern void bad_word_filter(char* s, char** words, size_t nwords);

int main(void)
{
	char s[] = "sei un carciofo carciofo cavolfiore broccolo cavolfiore";
	char* words[] = { "" };

	bad_word_filter(s, words, 1);

	return 0;
}