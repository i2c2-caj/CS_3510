#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

void brute_factor(unsigned long long int n) {
	//std::cout << n << "=";
	lldiv_t junk = lldiv(1, 1);
	unsigned long long int i = 2;
	while (true) {
		if (i > ceil(sqrt(n))) {
			//std::cout << n << std::endl;
			break;
		}

		junk = lldiv(n, i);
		if (junk.rem == 0) {
			//std::cout << n << "/" << i << "=" << junk.quot << " r" << junk.rem << " (" << i << ")" << std::endl;
			n = junk.quot;
			//std::cout << i << "*";
			i = 1;
		}
		i++;
	}
}

bool isPrimeByFactoring(unsigned long long int n) {
	lldiv_t junk = lldiv(1, 1);
	unsigned long long int i = 2;
	while (true) {
		if (i > ceil(sqrt(n))) {
			std::cout << n << " is prime" << std::endl;
			return true;
		}

		junk = lldiv(n, i);
		if (junk.rem == 0) {
			//std::cout << n << " is not prime" << std::endl;
			return false;
			//std::cout << n << "/" << i << "=" << junk.quot << " r" << junk.rem << " (" << i << ")" << std::endl;
			//n = junk.quot;
			//std::cout << i << "*";
			//i = 1;
		}
		i++;
	}
}


int main() {
	int runs = 1;
	int start = 2;
	int end = 51;

	for (int i = start; i < end; i++) {
		int primes_found = 0;
		unsigned long long int upper = pow(2, i);
		unsigned long long int lower = 2;

		std::cout << std::endl << i << " bits:" << std::endl;
		//clock_t t1 = clock();
		for (int k=0; k < runs; k++) {
			for (unsigned long long int j = upper; j > lower ; j--) {
				if (isPrimeByFactoring(j)) { primes_found++; }
				if (primes_found >= 1000) { break; }
			}
		}
		//clock_t t2 = clock();
		//clock_t dt = t2 - t1;
		//double clocks_per_rep = ((double)dt) / runs;
		//std::cout << i << "(" << lower << "-" << upper << "): " << clocks_per_rep/CLOCKS_PER_SEC << std::endl;
	}

	return 0;
}