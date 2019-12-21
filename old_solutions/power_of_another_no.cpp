#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		float a = log(m)/log(n);
		int b = a;
		if (a==b)
			cout<<1<<endl;
		else
			cout<<0<<endl;
	}
	return 0;
}