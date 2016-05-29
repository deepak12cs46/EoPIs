#include <iostream>

using namespace std;

int add(int a, int b){
	int sum = 0,k=1,temp_a=a,temp_b=b,ak,bk,carryout,carryin = 0;
	while(temp_a || temp_b){
		ak = a&k;
		bk = b&k;
		carryout = (ak & bk) | (ak & carryin) | (bk & carryin);
		sum |= ak ^ bk ^ carryin;
		carryin = carryout<<1;
		k<<=1;
		temp_a>>=1;
		temp_b>>=1;
	}
	return sum | carryin;
}

int mult(int x, int y){
	int sum = 0;
	while(x){
		if (x&1)  sum = add(sum,y);
		x = x>>1;
		y = y<<1;
	}
	return sum;
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<mult(x,y)<<endl;
	return 0;
}