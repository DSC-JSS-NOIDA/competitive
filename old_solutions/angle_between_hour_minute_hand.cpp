#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		float h,m;
		cin>>h>>m;
		h = (360/12)*h + (m*0.5);
		if(h>=360)
			h-=360;
// 		cout<<"h"<<h<<endl;
		m = (360/60) * m;
		if(m>=360)
			m-=360;
		if(360-floor(abs(h-m)) <floor(abs(h-m)))
    		cout<<floor(360 -abs(h-m))<<endl;
	    else
	        cout<<floor(abs(h-m))<<endl;
	}
	return 0;
}