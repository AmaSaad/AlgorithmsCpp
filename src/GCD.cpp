#include <iostream>

using namespace std;

int gcd(int x, int y) {

	if (x == 0)
		return y;
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
int main5() {
	cout << gcd(270, 192);
	return 0;
}
