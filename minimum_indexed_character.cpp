#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		string str,patt;
		std::map<char, int> map;
		cin>>str;
		cin>>patt;
		std::vector<int> arr(26,100000);
		for (int i = 0; i < str.length(); ++i)
		{
			// cout<<(int)(str[i])-96<<" ";
			if(arr[(int)(str[i]) - 97]>i)
				arr[(int)(str[i]) - 97]=i;
		}
		// sort(arr.begin(),arr.end(),greater<int>());
		for (int i = 0; i < patt.length(); ++i)
		{
			map[patt[i]] = arr[(int)(patt[i])-97];
		}
		int min = 10000;
		char ans = ' ';
		for (std::map<char, int>::iterator it=map.begin();it!=map.end();it++)
		{
			if(it->second<min){
				ans = it->first;
				min = it->second;
			}
		}
		if(ans == ' ')
			cout<<"No character present"<<endl;
		else
			cout<<ans<<endl;
	}
	return 0;
}