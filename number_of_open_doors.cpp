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
		int i=1;
		int ans = 0;
		while(n>0){
			ans++;
			n--;
			n-= 2*i;
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}