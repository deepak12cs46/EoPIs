#include <iostream>

using namespace std;

int swap_bits(int x, int i, int j){
	if(((x>>i)&1) != ((x>>j)&1)) x ^= (1<<i)|(1<<j);
	return x;
}

int main(){
	int x,i,j;
	cin>>x>>i>>j;// i and j are indices of bits
	cout<<swap_bits(x,i,j)<<endl;
	return 0;
}