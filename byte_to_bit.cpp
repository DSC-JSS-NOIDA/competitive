#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		ll n,temp,temp2;
		cin>>n;
		temp = pow(2,(n/26));
		temp2 = n%26;
		if(temp2<=2)
			cout<<temp<<" 0 0"<<endl;
		else if(temp2<=10)
			cout<<"0 "<<temp<<" 0"<<endl;
		else
			cout<<"0 0 "<<temp<<endl;
	}
	return 0;
}