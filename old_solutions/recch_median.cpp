#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	ll n,x,ans=0;
	cin>>n>>x;
	std::vector<ll> v(n);
	for (int i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	if(v[(n-1)/2]<x){
		for (int i = (n-1)/2; i < n; ++i)
		{
			if(v[i]>=x)
				break;
			ans+=x-v[i];
		}
	}else{
		for (int i = (n-1)/2; i >= 0; i--)
		{
			if(v[i]<=x)
				break;
			ans+=v[i]-x;
		}
	}
	cout<<ans;
	return 0;
}