#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

double fib1(int n) {
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	return fib1(n - 1) + fib1(n - 2);
}

/*
int main() {
	int i;
	clock_t t1[40];
	clock_t t2[40];
	clock_t dt[40];
	double fibs[40];
	double times[40];
	double clocks;
	double clocks_per_rep;
	double seconds;
	int total = 2000;
	int upper = 10;
	
	for (i = 0; i < upper; i++) {
		// need to run extra tests to get a better time average
		if (i < 20) {
			int j;
			t1[i] = clock();
			for (j = 0; j < total; j++) {
				fibs[i] = fib1(i + 1);
			}
			t2[i] = clock();
			dt[i] = t2[i] - t1[i];

			clocks_per_rep = ((double)dt[i]) / total;
			times[i] = clocks_per_rep / CLOCKS_PER_SEC;
			//std::cout << i << " " << t2[i] << "-" << t1[i] << "=" << times[i] << std::endl;
		}
		// one run will be enough for a timed average
		else {
			t1[i] = clock();
			fibs[i] = fib1(i + 1);
			t2[i] = clock();
			dt[i] = t2[i] - t1[i];
			times[i] = ((double)dt[i]) / CLOCKS_PER_SEC;
		}
	}

	// print results
	for (i = 0; i < upper; i++) {
		//std::cout << i << " " << fibs[i] << " " << times[i] << std::endl;
		std::cout << times[i] << std::endl;
	}
	
	return 0;
}
*/