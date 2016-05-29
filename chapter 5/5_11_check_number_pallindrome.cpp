#include <iostream>
#include <cmath>

using namespace std;

bool is_pallindrome(int x){
	if(x<0) return 0;
	// if(x<10) return 1;
	while(x){
		if(x%10 != x/int(pow(10,floor(log10(x))))) return 0;
		x = x%int(pow(10,floor(log10(x))));
		x /= 10;
	}
	return 1;
}

int main(){
	int x;
	cin>>x;
	cout<<is_pallindrome(x)<<endl;
	return 0;
} 