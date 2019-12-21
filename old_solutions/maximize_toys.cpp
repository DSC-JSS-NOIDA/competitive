#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int i,n,k,sum = 0;
		cin>>n>>k;
		std::vector<int> v(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end());
		for (i = 0; i < n; ++i)
		{
			sum+=v[i];
			if(sum>k)
				break;
		}
		cout<<i<<endl;
	}
	return 0;
}