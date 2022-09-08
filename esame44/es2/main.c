#include <stdlib.h>
#include <stdint.h>

extern uint32_t vector_MCD(const uint32_t* v, size_t n);

int main(void)
{
	uint32_t vet[] = { 3,6,9,12,15 };

	uint32_t ret = vector_MCD(vet, sizeof(vet) / 4);

	return 0;
}