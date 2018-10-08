#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	ll n,m,l;
	float a;
	cin>>n>>m>>l>>a;
	std::vector<pair<float,float> > v;
	for (int i = 0; i < n; ++i)
	{
		float a,b;
		cin>>a>>b;
		v.push_back(make_pair(a,b));
	}
	float x11=0,x21=0,x31=0,x41=0;
	float x12=0,x22,x32,x42;
	float slop,y,temp;
	int flag = 1;
	for (int i = 0; i < n; ++i)
	{
		x12 = min(x31,x41);
		x22 = (v[i].second)/a;
		x22 = (v[i].first)-x22;
		x32 = (v[i].first)+(v[i].second)/a;
		x42 = (m-x12)/((v[i].second-0)/(v[i].first-x12));
		x42 = x42*2 + x12;
	cout<<x12<<" "<<x22<<" "<<x32<<" "<<x42<<" "<<endl;
		if(x22<x12){
			cout<<"i:"<<i;
			slop = (0-m)/(x42 - (x42-x12)/2 + x12);
			cout<<slop<<" "<< x42<<endl;
			y = slop*(v[i].first) + x42;
			if(y<v[i].second){
				cout<<"i:"<<i<<"y:"<<y;
				flag = 0;
				break;
			}
		}
		x11 = x12;
		x21 = x22;
		x31 = x32;
		x41 = x42;
		if(x21<x11){
			temp = x21;
			x21 = x11;
			x11 = temp;
		}
		if(x41<x31){
			temp = x41;
			x41 = x31;
			x31 = temp;
		}
		cout<<x11<<" "<<x21<<" "<<x31<<" "<<x41<<" "<<endl;
	}
	if(flag == 0 || min(x41,x31) > l){
		cout<<"No";
	}else{
		cout<<"Yes";
	}
	return 0;

}