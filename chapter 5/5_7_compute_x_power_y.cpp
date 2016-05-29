#include <iostream>

using namespace std;

int power(int x, int y){
	int res = 1;
	while(y>0){
		if(y&1) res*=x;
		x *= x;
		y>>=1; 
	}
	return res;
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<power(x,y)<<endl;
}