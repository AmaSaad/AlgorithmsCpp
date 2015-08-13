#include <iostream>
using namespace std;

void factorize(int n) {
	int div = n;
	for (int i = 2; i * i <= div; i++) {
		while (div % i == 0) {
			cout << i << " \n";
			div /= i;
		}
	}
if(div!=1)cout<<div;
}

