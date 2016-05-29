#include <iostream>

using namespace std;

int reverse_digit(int x){
	int res = 0;
	bool is_neg = x<0;
	is_neg?x=(-x):x; 
	while(x){
		res = res*10 + x%10;
		x/=10;
	}
	return is_neg?-res:res;
}

int main(){
	int x;
	cin>>x;
	cout<<reverse_digit(x)<<endl;
	return 0;
}