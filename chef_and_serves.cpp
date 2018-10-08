#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		ll p1,p2,k;
		cin>>p1>>p2>>k;
		ll temp = (p1+p2)/k;
		if(temp%2 == 0)
			cout<<"CHEF";
		else
			cout<<"COOK";
		cout<<endl;
	}
	return 0;
}