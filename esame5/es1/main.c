#include "array.h"

int main(void)
{
	double 
		arr1[] = { 1,2,3 },
		arr2[] = { 7,8,9 };

	double* ret = array_somma(arr1, arr2, 3);
	
	return 0;
}