#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

struct person {
	char name[256];
	unsigned int age;
};

void person_read(FILE* f, struct person* pp) {
	if (f == NULL || pp == NULL) {
		return;
	}
	fscanf(f, "%[^ ] %u", pp->name, &(pp->age));

}

