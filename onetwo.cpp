#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t,count;
	cin>>t;
	while(t--){
		int n,c1=0,c2=0,pos,sum=0;
		cin>>n;
		int v[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>v[i];
			sum+=v[i];
			if(v[i] == 1){
				c1++;pos = i;
			}else
				c2++;
		}
		if(c1>1){
			cout<<sum;
		}else if(c1==1){
			if(pos<=n/2){
				cout<<sum-pos;
			}else{
				cout<<sum - (n-pos) +1;
			}
		}else if(c1==0){
			cout<<n;
		}
	    cout << "\n";		
	}
	return 0;
}