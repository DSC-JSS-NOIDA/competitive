#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,cur_finish_time = 0;
		cin>>n;
		std::vector<int> a(n);
		std::vector<int> b(n);
		std::vector< std::pair < int, std::pair < int, int > > > v;
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
			v.push_back(make_pair(b[i],make_pair(a[i],i)));
		}
		sort(v.begin(),v.end());
		for (int i = 0; i < n; ++i)
		{
			if(v[i].second.first>cur_finish_time){
				cur_finish_time = v[i].first;
				cout<<v[i].second.second + 1<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}