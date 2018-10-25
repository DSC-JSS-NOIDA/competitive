#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        unsigned long long int ans=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            ans*=i;
        }
        cout<<ans<<endl;
    }
    return 0;
}
  
