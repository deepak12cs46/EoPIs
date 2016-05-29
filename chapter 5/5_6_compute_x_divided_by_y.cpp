#include <iostream>

using namespace std;

int divide(int x, int y){
	int power = 12;
	int y_power = y<<power;
	int res = 0;
	while(x>=y){
		while(x<y_power){
			y_power>>=1;
			power--;
		}
		res+=1<<power;
		x-=y_power;
	}
	return res;
}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<divide(x,y)<<endl;
	return 0;
}