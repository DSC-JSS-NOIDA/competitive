#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--){
		ll d,a,m,b,x,left_amt,ans;
		cin>>d>>a>>m>>b>>x;
		left_amt = x-d;
		ll bal = left_amt/(m*a+b);
		ans = bal*(m+1);
		bal = left_amt%(m*a+b);
		// cout<<ans<<bal<<a<<m<<d;
		ans+= bal/a;
		if(bal%a == 0){
			cout<<ans;
		}else 
		// if(bal%a<=b){
			cout<<ans+1;
		// }else{
		// 	cout<<ans+2;
		// }
		cout<<endl;
	}
	return 0;
}