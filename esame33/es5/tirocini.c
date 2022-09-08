#include "tirocini.h"

bool tirocinio_load(FILE* f, struct tirocinio* t)
{

	if (f == NULL || t == NULL)
		return false;

	int nome_l, azienda1_l, azienda2_l, azienda3_l, r_l;

	int ret_fscanf = 0;

	ret_fscanf = fscanf(f, "%*[^,]%n,%*[^,]%n,%*[^,]%n,%*[^\n]%n\n%n", &nome_l, &azienda1_l, &azienda2_l, &azienda3_l, &r_l);

	if (ret_fscanf < 0)
		return false;

	fseek(f, -r_l - 1, SEEK_CUR);

	azienda3_l = azienda3_l - azienda2_l;
	azienda2_l -= azienda1_l;
	azienda1_l -= nome_l;

	t->nome = malloc(nome_l + 1);
	t->azienda1 = malloc(azienda1_l);
	t->azienda2 = malloc(azienda2_l);
	t->azienda3 = malloc(azienda3_l);

	ret_fscanf = fscanf(f, "%[^,],%[^,],%[^,],%[^\n]\n", t->nome, t->azienda1, t->azienda2, t->azienda3);

	return true;
}
