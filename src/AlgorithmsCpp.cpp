//============================================================================
// Name        : AlgorithmsCpp.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
bool isPrime (int n){
	if(n<2)return false;
	if(n==2)return true;
	for (int i =2;i*i < n;i++){//i<sqrt(n)
		if (n%i == 0)return false;

	}
	return true;


}


int main() {
	int n ;
	cout<<"Enter number: ";
	cin>>n;
	bool isprime;
	isprime = isPrime(n);

	cout << (isprime?"prime":"not prime") << endl; // prints !!!Hello World!!!
	return 0;
}
