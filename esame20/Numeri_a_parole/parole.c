#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

static const char* unita_str[] = { "zero", "uno", "due", "tre", "quattro", "cinque", "sei", "sette", "otto", "nove" }; // Metto le unità qui in modo che siano accessibili in ogni funzione

static void Unita(char* sz, unsigned int i /*i passato deve essere sempre 0 <= i < 10 */)
{
	if (i != 0) {
		strcat(sz, unita_str[i]); // assegno a sz la corretta cifra delle unità corrisponedente
	}
}

static void Decine(char* sz, unsigned int i /*i passato deve essere sempre 0 <= i < 100 */, bool* is_between_10_20)
{
	if (i < 10) {
		return;
	}

	if (i >= 10 && i <= 20) {
		*is_between_10_20 = true; // se 10 <= i <= 20 dobbiamo ricordarci di non eseguire poi Unita

		const char* decine_semplici[] = { "dieci", "undici", "dodici", "tredici", "quattordici", "quindici", "sedici", "diciassette", "diciotto", "diciannove", "venti" };

		strcat(sz, decine_semplici[i - 10]); // Concateno a sz la corretta cifra delle decine corrispondente
	}
	else {
		*is_between_10_20 = false; // se 10 <= i <= 20 dobbiamo ricordarci di non eseguire poi Unita

		unsigned int d = i / 10; // in questa variabile salviamo la cifra delle decine di i
		unsigned int u = i % 10; // in questa variabile salviamo la cifra delle unita di i (ci serve sapere la cifra delle unita di i per troncare la stringa delle decine)

		if (u == 1 || u == 8) {
			const char* decine_troncate[] = { "vent", "trent", "quarant", "cinquant", "sessant", "settant", "ottant", "novant" };

			strcat(sz, decine_troncate[d - 2]); // Concateno a sz la corretta cifra delle decine corrispondente (il -2 serve per "allineare" d alla corretta decina di decine_troncate)

		}
		else {
			const char* decine[] = { "venti", "trenta", "quaranta", "cinquanta", "sessanta", "settanta", "ottanta", "novanta" };

			strcat(sz, decine[d - 2]); // Concateno a sz la corretta cifra delle decine corrispondente (il -2 serve per "allineare" d alla corretta decina di decine)
		}
	}
}

static void Centinaia(char* sz, unsigned int i)
{
	if (i < 100) {
		return;
	}

	const char* cento = "cento";

	unsigned int h = i / 100; // salvo dentro h la cifra delle centinaia del numero i

	if (h != 1) {
		strcat(sz, unita_str[h]); // concateno la stringa delle centinaia se h != 1
	}

	strcat(sz, cento); // concateno la stringa "cento"
}

void a_parole_1_999(char* sz, unsigned int i)
{
	strcpy(sz, ""); // Inizializziamo sz

	if (i > 999) {
		return;
	}

	bool is_between_10_20 = false;	// questa variabile ci serve per sapere se il numero passato a Decine() è compreso fra 10 o 20, perché nel caso non bisogna eseguire Unita() perché quello che Unita() fa è già stato fatto da Decine

	Centinaia(sz, i);
	Decine(sz, i % 100, &is_between_10_20);

	if (!is_between_10_20) {
		Unita(sz, i % 10);
	}

}