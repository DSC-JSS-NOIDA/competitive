#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,amt,count = 0,act_amt = 0,org_amt;
		cin>>n>>amt;
		std::vector<int> v(n);
		org_amt = amt;
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
		}
		sort(v.begin(),v.end(),greater<int>());
		for (int i = 0; i < n; ++i)
		{
			count += amt/v[i];
			act_amt+= (amt/v[i])*v[i];
			amt %= v[i];
			cout<<v[i]<<" : "<<count<<" : "<<act_amt<<endl;
		}
		if(act_amt == org_amt)
			cout<<count<<endl;
		else
			cout<<"-1"<<endl;
	}
	return 0;
}