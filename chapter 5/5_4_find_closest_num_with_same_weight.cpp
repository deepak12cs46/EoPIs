#include <iostream>

using namespace std;

int findclosest(int x){
	for(int i=0; i<63;i++)
		if(((x>>i)&1) != ((x>>(i+1))&1)) return x^(3<<i);
}

int main(){
	int x;
	cin>>x;
	cout<<findclosest(x)<<endl;
	return 0;
}