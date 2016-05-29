#include <iostream>
#include <cstdio>

using namespace std;

bool parity1(int x){
	bool res;
	while(x){
		res ^= x&1;
		x>>=1;
	}
	return res;
}

bool parity2(int x){
	bool res;
	while(x){
		res ^= 1;
		x &= (x-1);
	}
	return res;
}

int main(){
	int x;
	cin>>x;
	cout<<parity1(x);
	cout<<parity1(x);
	return 0;
}