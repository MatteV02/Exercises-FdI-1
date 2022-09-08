#include "angoli.h"

struct angolo somma_angoli(struct angolo a, struct angolo b)
{
	struct angolo ret = { 0, 0, 0 };

	uint32_t temp;

	temp = a.secondi + b.secondi;

	ret.primi += temp / 60;
	ret.secondi = temp % 60;

	temp = a.primi + b.primi + ret.primi;

	ret.gradi += temp / 60;
	ret.primi = temp % 60;

	ret.gradi += a.gradi + b.gradi;

	return ret;
	
}