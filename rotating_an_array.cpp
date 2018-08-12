#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,d,temp;
		cin>>n;
		cin>>d;
		std::vector<int> a(n);
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		d=n-d-1;
		for (int j = 0; j <= d; ++j)
		{
			temp = a[n-1];
			for (int i = n-1; i >0; i--)	
			{
				a[i] = a[i-1];
			}		
			a[0] = temp;
		}
		for (int i = 0; i < n; ++i)
		{
			cout<<a[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}