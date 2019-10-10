#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long int ans=1;
		for (int i = 2; i <= n; ++i)
		{
			ans=ans*i;
		}
		cout<<ans<<endl;
	}
	return 0;
}
