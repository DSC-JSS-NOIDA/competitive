#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int n,m,i,j;
	cin>>n>>m;
	std::vector<string> v(n);
	int str;
	for (i = 0; i < n; ++i)
	{
		cin>>v[i];
	}
	for (i = 0; i < n; ++i)
	{
		str = v[i].find('B');
		if(str!=std::string::npos){
			break;
		}
	}
	int s_r = i;
	for (i = n-1; i >=0; i--)
	{
		str = v[i].find('B');
		if(str!=std::string::npos){
			break;
		}
	}
	for (j= str; j < m ; ++j)
	{
		if(v[s_r][j] == 'W'){
			break;
		}
	}
	int e_r = i;
	// cout<<s_r<<e_r<<endl;
	// cout<<str<<j<<endl;
	cout<<(e_r+s_r)/2 +1<<" "<<(j+str)/2 +1 ;
	return 0;
}