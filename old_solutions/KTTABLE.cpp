#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,ans=0;
	    long long int reqd;
	    cin>>n;
        vector<long long int> v(n+1);
        v[0]=0;
        for(int i=1;i<=n;i++)
            cin>>v[i];
        for(int i=1;i<=n;i++)
        {
            cin>>reqd;
            if(reqd<=v[i]-v[i-1])
                ans++;
        }
        cout<<ans<<endl;
	}
	return 0;
}
