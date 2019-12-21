#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,max = 0;
		cin>>n;
		string temp;
		std::map<string, int> map;
		std::vector<string> v;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			if(map[temp])
				map[temp]++;
			else
				map[temp] = 1;
		}
		for (std::map<string, int>::iterator it=map.begin(); it!= map.end(); ++it)
		{
			if(it->second > max)
				max = it->second;
		}
		for (std::map<string, int>::iterator it=map.begin(); it!= map.end(); ++it)
		{
			if(it->second == max)
				v.push_back(it->first);
		}
		sort(v.begin(),v.end());
		cout<<v[0]<<endl;
	}
	return 0;
}