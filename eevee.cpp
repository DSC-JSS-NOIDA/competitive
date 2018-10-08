#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int n,flag;
	cin>>n;
	string s;
	string arr[] = {"vaporeon", "espeon", "jolteon", "flareon", "umbreon", "leafeon", "glaceon", "sylveon"};
	cin>>s;
	if(n==8)
		cout<<arr[0];
	else if(n==6)
		cout<<arr[1];
	else{
		for (int i = 2; i < 8; ++i)
		{
			flag = 1;
			for (int j = 0; j < s.length(); ++j)
			{
				if(s[j]!='.' && s[j] != arr[i][j]){
					flag = 0;
					break;
				}
			}
			if(flag == 1){
				cout<<arr[i];
				break;
			}
		}
	}
	return 0;
}