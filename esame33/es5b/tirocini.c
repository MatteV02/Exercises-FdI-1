#include "tirocini.h"

struct stringa {
	size_t capacity, length;
	char* data;
};

bool get_stringa(FILE* f, struct stringa* str) {
	str->length = 1;
	str->capacity = 4;
	str->data = malloc(sizeof(double) * str->capacity);

	while (1) {
		int temp;

		temp = fgetc(f);

		if (temp < 0) {
			free(str->data);
			return false;
		}

		if (temp == '\n' || temp == ',') {
			str->data = realloc(str->data, str->length);
			str->data[str->length - 1] = 0;
			return true;
		}
		
		str->data[str->length - 1] = temp;

		str->length++;

		if (str->length > str->capacity) {
			str->capacity *= 2;
			str->data = realloc(str->data, str->capacity);
		}
	}
}

bool tirocinio_load(FILE* f, struct tirocinio* t)
{
	if (f == NULL || t == NULL)
		return false;

	struct stringa str;

	for (size_t i = 0; i < 4; i++) {
		if (!get_stringa(f, &str)) {
			return false;
		}
		else {
			switch (i) {
			case 0:
				t->nome = str.data;
				break;
			case 1:
				t->azienda1 = str.data;
				break;
			case 2:
				t->azienda2 = str.data;
				break;
			case 3:
				t->azienda3 = str.data;
			}
		}
	}

	return true;

}