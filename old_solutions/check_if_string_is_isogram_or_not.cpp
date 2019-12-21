#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int flag = 1;
		string s;
		cin>>s;
		std::map<char, int> map;
		for (int j = 0; j < s.length(); ++j)
		{
			if(map[s[j]])
				map[s[j]]++;
			else
				map[s[j]] = 1;
		}
		for (std::map<char, int>::iterator it = map.begin(); it!=map.end(); it++)
		{
			if(it->second > 1){
				flag = 0;
				break;
			}
		}
		cout<<flag<<endl;
	}
	return 0;
}