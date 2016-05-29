#include <iostream>
#include <cmath>

using namespace std;

class rectangle{
public:
	int x,y,w,h;
};

void intersect(const rectangle & r, const rectangle & s){
	bool is_intersect = r.x <= s.x+s.w && s.x <= r.x+r.w && r.y <= s.y+s.h && s.y<= r.y+r.h;
	if(is_intersect) {cout<<" they intersect "<<endl; 
	cout<<"intersection area "<<max(r.x,s.x)<<max(r.y,s.y)<<min(r.x+r.w, s.x+s.w) - max(r.x,s.x)<<min(r.y+r.h, s.y+s.h) - max(r.y,s.y)<<endl;}
	else cout<<"they don't intersect "<<endl;
}

int main(){
	rectangle r,s;
	cin>>r.x>>r.y>>r.w>>r.h>>s.x>>s.y>>s.w>>s.h;
	intersect(r,s);
	return 0;
}