#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,l;
	    cin>>n>>k;
	    vector<string> v1(n);
	    set<string> s;
	    string temp;
	    for(int i=0;i<n;i++)
	        cin>>v1[i];
	    for(int i=0;i<k;i++)
	    {
	        cin>>l;
	        for(int j=0;j<l;j++)
	        {
	            cin>>temp;
	            s.insert(temp);
	        }
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(s.find(v1[i])==s.end())
	            cout<<"NO ";
	        else
	            cout<<"YES ";
	    }
	    cout<<endl;
    }
	return 0;
}
