#include <stdlib.h>

#include "leggi_nome.h"

int main(void) {

	char* sito = leggi_nome_sito("http://web.whatsapp.com");

	free(sito);

	return 0;
}