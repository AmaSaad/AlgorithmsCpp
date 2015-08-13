#include <iostream>

using namespace std;



int modeInverse(int x,int mode){

	//x*(mulInverseX=y) = 1 --> x=1/y
	//similar {x*(modeinverseX=y)} mod C = 1 -->
	//since (x*y)%C = (x%C * y%C) % C
	//for division (x/y)%C = x%C * (y modinv C)
	for(int i =2;i<mode-1;i++){
		if((x*i) %mode == 1)return i;
//x must be coprime with mode (no common prime factor)
	}
	return -1;
}
int main(){

	return 0;

}
