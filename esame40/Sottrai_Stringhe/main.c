extern char* sottrai_stringhe(const char* a, const char* b);

int main(void)
{
	char* r = sottrai_stringhe("100", "99");

	free(r);
	return 0;
}