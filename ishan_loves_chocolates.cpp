#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int tmp;
		cin>>tmp;
		int ans=tmp;
		for (int i = 1; i < n; ++i)
		{
			cin>>tmp;
			if(ans>tmp)
				ans = tmp;
		}
		cout<<ans<<endl;
	}
	return 0;
}