#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

struct person {
	char name[256];
	unsigned int age;
};

unsigned int count_teenagers(FILE* f) {
	if (f == NULL)
		return 0;

	unsigned int n_persone;
	if (fscanf(f, "%u\n", &n_persone) != 1) {
		return 0;
	}

	unsigned int n_teen = 0;
	for (unsigned int i = 0; i < n_persone; i++) {
		struct person p;
		fscanf(f, "%[^ ] %u\n", p.name, &p.age);
		if ((p.age >= 13) && (p.age <= 19)) {
			n_teen++;
		}
	}

	return n_teen;

}