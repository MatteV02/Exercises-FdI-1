#include <stdlib.h>
#include <string.h>
#include <stdio.h>

struct stringa {
	size_t capacity, length;
	char* data;
};

void push_back(struct stringa* str, char c) {
	if (str->length >= str->capacity) {
		str->capacity *= 2;
		str->data = realloc(str->data, str->capacity);
	}

	str->data[str->length - 1] = c;

	str->length++;
}

char* decodifica_morse(const char* codice)
{
	if (codice == NULL)
		return NULL;

	struct stringa str = { 4, 1, malloc(str.capacity) };

	int pos = 0;

	while (1) {
		char temp[5];
		int ret, parz;

		ret = sscanf(codice + pos, "%s%n ", temp, &parz);
		pos += parz;

		if (ret != 1)
			break;

		if (strcmp(temp, "._") == 0) {
			push_back(&str, 'A');
		} 
		else if (strcmp(temp, "_...") == 0) {
			push_back(&str, 'B');
		}
		else if (strcmp(temp, "_._.") == 0) {
			push_back(&str, 'C');
		}
		else if (strcmp(temp, "_..") == 0) {
			push_back(&str, 'D');
		}
		else if (strcmp(temp, ".") == 0) {
			push_back(&str, 'E');
		}
		else if (strcmp(temp, ".._.") == 0) {
			push_back(&str, 'F');
		}
		else if (strcmp(temp, "__.") == 0) {
			push_back(&str, 'G');
		}
		else if (strcmp(temp, "....") == 0) {
			push_back(&str, 'H');
		}
		else if (strcmp(temp, "..") == 0) {
			push_back(&str, 'I');
		}
		else if (strcmp(temp, ".___") == 0) {
			push_back(&str, 'J');
		}
		else if (strcmp(temp, "_._") == 0) {
			push_back(&str, 'K');
		}
		else if (strcmp(temp, "._..") == 0) {
			push_back(&str, 'L');
		}
		else if (strcmp(temp, "__") == 0) {
			push_back(&str, 'M');
		}
		else if (strcmp(temp, "_.") == 0) {
			push_back(&str, 'N');
		}
		else if (strcmp(temp, "___") == 0) {
			push_back(&str, 'O');
		}
		else if (strcmp(temp, ".__.") == 0) {
			push_back(&str, 'P');
		}
		else if (strcmp(temp, "__._") == 0) {
			push_back(&str, 'Q');
		}
		else if (strcmp(temp, "._.") == 0) {
			push_back(&str, 'R');
		}
		else if (strcmp(temp, "...") == 0) {
			push_back(&str, 'S');
		}
		else if (strcmp(temp, "_") == 0) {
			push_back(&str, 'T');
		}
		else if (strcmp(temp, ".._") == 0) {
			push_back(&str, 'U');
		}
		else if (strcmp(temp, "..._") == 0) {
			push_back(&str, 'V');
		}
		else if (strcmp(temp, ".__") == 0) {
			push_back(&str, 'W');
		}
		else if (strcmp(temp, "_.._") == 0) {
			push_back(&str, 'X');
		}
		else if (strcmp(temp, "_.__") == 0) {
			push_back(&str, 'Y');
		}
		else if (strcmp(temp, "__..") == 0) {
			push_back(&str, 'Z');
		}
		else if (strcmp(temp, "/") == 0) {
			push_back(&str, ' ');
		}

	}

	if (str.capacity != str.length) {
		str.data = realloc(str.data, str.length);
	}
	str.data[str.length - 1] = 0;

	return str.data;

}