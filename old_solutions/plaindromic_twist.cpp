#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,a,b,flag = 1;
		cin>>n;
		string s;
		cin>>s;
		for (int i = 0; i <=n/2; ++i)
		{
			a = (int)s[i];
			b = (int)s[n-i-1];
			if(abs(b-a)>2 || abs(b-a)==1){
				flag = 0;
				break;
			}
		}
		if(flag == 1){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
		cout<<endl;
	}
	return 0;
}