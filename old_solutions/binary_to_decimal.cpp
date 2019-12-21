#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		long long int n,ans = 0;
		cin>>n;
		int i=0;
		while(n!=0){
			int temp = n%10;
			ans += temp* pow(2,i);
			n/=10;
			i++;
		}
		cout<<ans<<endl;
	}
	return 0;
}