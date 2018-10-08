#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,temp, flag = 0;
		cin>>n;
		std::map<int, int> map;
		std::vector<int> v;
		for (int i = 0; i < n; ++i)
		{
			cin>>temp;
			v.push_back(temp);
			if(map[temp])
				map[temp]++;
			else
				map[temp] = 1;
		}
		for (int i = 0; i < v.size(); ++i)
		{
			if(map[v[i]] == 1){
				flag = 1;
				cout<<v[i]<<endl;
				break;
			}			
		}
		if(flag == 0)
			cout<<flag<<endl;
	}
	return 0;
}