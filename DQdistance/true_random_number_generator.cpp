#include "true__random_number_generator.h"
#include <stdint.h>
#include <random>
#include <iostream>

int true_random_number_generator_generate_number(void) {

		std::mt19937 e(std::random_device{}());
		std::bernoulli_distribution d;
		for (int n = 0; n < 100; ++n) std::cout << d(e);

	return 5;
}



