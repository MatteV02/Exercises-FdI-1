#include <stdlib.h>
#include <stdbool.h>

size_t find_first_partition(const int* seq, size_t n)
{
	if (seq == NULL || n == 0)
		return 0;

	int massimo;
	size_t ret;

	for (ret = 0; ret < n; ret++) {
		if (ret == 0 || seq[ret] > massimo) {
			massimo = seq[ret];

			bool is_partition = true;

			for (size_t j = ret + 1; j < n; j++) {
				if (seq[j] <= massimo) {
					is_partition = false;
					break;
				}
			}

			if (is_partition) {
				return ret;
			}
		}
	}

	return ret;

}