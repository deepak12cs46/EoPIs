#include <iostream>
#include <string.h>

using namespace std;

int encoding(string s){
	int res = 0,len = s.size();
	for (int i=0; i<len; i++){
		res = res*26 + s[i] - 'A' +1;
	}
	return res-1;
}

string decoding(int x){
	string s,temp;
	while(x){
		temp = x%26+'A';
		s.insert(0,temp);
		x = x/26;
	}
	return s;
}

int main(){
	string s;
	int x;
	while(1){
	// cin>>s;
	// cout<<encoding(s)<<endl;
	cin>>x;
	cout<<decoding(x)<<endl;
	}
	return 0;
}