#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t,m,n;
	cin>>t;
	while(t--){
		cin>>m;
		int a[m];
		for (int i = 0; i < m; i++)
			cin>>a[i];
		cin>>n;
		int change[n+1];
		change[0] = 1;
		for (int i = 1; i < n+1; ++i)
			change[i] = 0;
		for (int i = 0; i < m; ++i)
		{
			for (int j = 1; j < n+1; ++j)
			{
				if(j>=a[i])
					change[j]+=change[j-a[i]];
			}
		}
		cout<<change[n]<<endl;
	}
	return 0;
}