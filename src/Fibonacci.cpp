/*
 * Fibonacci.cpp
 *
 *  Created on: Aug 1, 2015
 *      Author: ahmedsaad
 */

#include <iostream>

using namespace std;
unsigned long *fib_saved;
unsigned long fib(int n) { //memoization

	if (fib_saved[n] != -1) {
		//cout << n << " cached\n";
		return fib_saved[n];
	}

	if (n == 0)
		return fib_saved[n] = 0;
	if (n == 1)
		return fib_saved[n] = 1;
	return fib_saved[n] = fib(n - 1) + fib(n - 2);
}
unsigned long getFibOf(int n) {
	delete fib_saved;
	unsigned long cache[n + 1];
	for (unsigned long i = 0; i < n + 1; i++) {
		cache[i] = -1;
	}
	fib_saved = cache;
	return fib(n);

}
unsigned long fib_dynamic(int n) { //bottom-up
	unsigned long all_fibs[n + 1];
	all_fibs[0] = 0;
	all_fibs[1] = 1;
	for (int i = 2; i < n + 1; i++) {
		all_fibs[i] = all_fibs[i - 1] + all_fibs[i - 2];
	}
	return all_fibs[n];

}
unsigned long fib_dynamic_enhanced(int n) { //bottom-up
	unsigned long current_fib1 = 0;
	unsigned long current_fib2 = 1;
	unsigned long newFib;
	for (int i = 2; i < n + 1; i++) {
		newFib = current_fib1 + current_fib2;
		current_fib1 = current_fib2;
		current_fib2 = newFib;
	}
	return newFib;
}
int main3() {
	cout << getFibOf(1000) << "\n";
	cout << fib_dynamic(1000) << "\n";
	cout << fib_dynamic_enhanced(1000)<<"\n";
	return 0;
}
