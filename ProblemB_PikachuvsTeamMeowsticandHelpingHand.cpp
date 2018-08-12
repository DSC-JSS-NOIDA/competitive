#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	std::vector<int> a(n);
	std::vector<int> last(30,INT_MIN);
	std::vector<int> ans(n);
	for (ll i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (ll i = 0; i < n; ++i)
	{
		for (int j = 0; j < 30; ++j)
		{
			int digit = a[i] >> j;
			if(digit&1)
				last[j] = i;
			if(i <= k+last[j])
				ans[i] = ans[i] | (1<<j);
		}
		cout<<ans[i]<<" ";
	}
	return 0;
}