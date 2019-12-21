#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	ll n;
	cin>>n;
	int p = ceil(log(n)/log(2));
	if(pow(2,p) == n)
		p++;
	cout<<p<<endl;
	return 0;
}