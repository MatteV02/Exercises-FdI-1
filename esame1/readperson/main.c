#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>

struct person {
	char name[256];
	unsigned int age;
};

extern void person_read(FILE* f, struct person* pp);

int main(void) {
	struct person p;
	FILE* f;

	f = fopen("person2.txt", "r");

	person_read(f, &p);
	
	fclose(f);

	return 0;

}