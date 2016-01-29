#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

double fib2(int n) {
	if (n > 512)
		return -1;
	if (n == 0)
		return 0;
	int fibs[512];
	fibs[0] = 0;
	fibs[1] = 1;
	for (int i = 2; i < n; i++) {
		fibs[i] = fibs[i - 1] + fibs[i - 2];
	}
	return fibs[n];
}

/*
int main() {
	int i;
	clock_t t1[40];
	clock_t t2[40];
	clock_t dt[40];
	double fibs[40];
	double times[40];
	double clocks_per_rep;
	int total = 1;
	int upper = 128;

	for (i = 0; i < upper; i++) {
		int j;
		t1[i] = clock();
		for (j = 0; j < total; j++) {
			fibs[i] = fib2(i + 1);
		}
		t2[i] = clock();
		dt[i] = t2[i] - t1[i];

		clocks_per_rep = ((double)dt[i]) / total;
		times[i] = clocks_per_rep / CLOCKS_PER_SEC;
		//std::cout << i << " " << t2[i] << "-" << t1[i] << "=" << times[i] << std::endl;
	}

	// print results
	for (i = 0; i < upper; i++) {
		//std::cout << i << " " << fibs[i] << " " << times[i] << std::endl;
		std::cout << times[i] << std::endl;
	}

	return 0;
}
*/