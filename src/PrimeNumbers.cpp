//============================================================================
// Name        : AlgorithmsCpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool isPrime(int n) {
	if (n < 2)
		return false;
	if (n == 2)
		return true;
	for (int i = 2; i * i <= n; i++) { //i<sqrt(n)
		if (n % i == 0)
			return false;

	}
	return true;

}
int countPrims(int to) { //o(lg(lg(n))) //backword thinking

	int rangeLength = to + 1;
	bool isprime[rangeLength];
	isprime[0] = false;
	isprime[1] = false;
	for (int i = 2; i < to + 1; i++)
		isprime[i] = true;
	for (int i = 2; i * i <= to; i++) {
		for (int j = 2; i * j <= to; j++)
			isprime[i * j] = false;
	}
	int count = 0;
	for (int c = 0; c < to + 1; c++) {
		if (isprime[c])
			count++;

	}
	return count;
}


