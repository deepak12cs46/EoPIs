#include <iostream>

using namespace std;

int reverse(int x){
	int pr[4] = {0,2,1,3};// pr = precomputed_reverse
	int mask = 3;
	int shift = 2;
	//cout<<precomputed_reverse[1]<<endl;
	return pr[(x) & mask]<<(3*shift) | pr[(x>>shift) & mask]<<(2*shift) | pr[(x>>(2*shift)) & mask]<<shift | pr[x>>(3*shift) & mask] ;
}

int main()
{	
	int x;
	cin>>x;
	cout<<reverse(x)<<endl;
	return 0;
}