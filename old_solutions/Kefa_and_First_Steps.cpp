#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int n,maxLen = 0,len=0;
	ll t1,t2;
	cin>>n;
	cin>>t1;
	maxLen = 1;
	len = 1;
	for (int i = 1; i < n; ++i)
	{
		cin>>t2;
		if(t2>=t1){
			len++;
		}
		else{
			if(maxLen<len){
				maxLen = len;
			}
			len = 1; 
		}
		t1=t2;
	}
	if(maxLen<len)
		maxLen = len;
	cout<<maxLen;
	return 0;
}