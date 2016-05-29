#include <iostream>
#include <string.h>
#include <algorithm>

using namespace std;

string convert_base(string s, int b, int c){
	bool is_neg = s[0] == '-';
	int len = s.size(),x=0;
	string res,s1,s2,neg;
	for(int i = is_neg?1:0; i<len; i++){
		x *= b; 
		x += isdigit(s[i])?s[i]-'0':s[i]-'A'+10;
	}
	cout<<x<<endl;
	while(x){
		int x_mod = x%c;
		s1 = '0'+x_mod;
		s2 = x_mod-10+'A';
		res.insert(0,x_mod<10?s1:s2);
		x /= c;
	}
	neg = '-';
	if(is_neg) res.insert(0, neg);
	return res;
}

int main(){
	int b,c;
	string s,s1;
	cin>>s>>b>>c;
	cout<<convert_base(s,b,c)<<endl;
	return 0;
}