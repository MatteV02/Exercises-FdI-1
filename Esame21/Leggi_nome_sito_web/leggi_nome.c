#include "leggi_nome.h"
#include <stdlib.h>
#include <string.h>

char* leggi_nome_sito(const char* url)
{
	url += 7;
	char* fine = strchr(url, '/');
	
	size_t sito_l;

	if (fine != NULL) {
		sito_l = fine - url + 1;
	}
	else {
		sito_l = strlen(url) + 1;
	}

	char* sito = malloc(sito_l);
	if (sito == NULL) {
		return NULL;
	}

	strncpy(sito, url, sito_l - 1);
	sito[sito_l - 1] = 0;

	return sito;
}
