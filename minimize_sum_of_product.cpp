#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,temp;
		ll ans = 0;
		cin>>n;
		std::vector<int> a;
		std::vector<int> b;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			a.push_back(temp);
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			b.push_back(temp);
		}
		sort(a.begin(),a.end());
		sort(b.begin(),b.end(),greater<int>());
		for (int i = 0; i < n; ++i)
		{
			ans+=a[i]*b[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}