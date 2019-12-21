#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int m,n,k,ans=0;

	string str;
	cin>>str;
    std::stringstream ss(str);
    std::vector<int> vect;
    int i;
    while (ss >> i)
    {
        vect.push_back(i);
        if (ss.peek() == ',')
            ss.ignore();
    }
    m = vect[0];
    n = vect[1];
    k = vect[2];

	cin>>m>>n>>k;
	std::vector<std::vector<std::vector<int> > > v(m,std::vector<std::vector<int> > (n,std::vector<int>(k)));
	int arr[k][2];
	int z;
	for (int i = 0; i < k; ++i)
	{
		cin>>str;
    	std::stringstream ss(str);
		cout<<str;
		arr[i][0] = str[0];
		arr[i][1] = str[2];
		// int p=0;
	 //    while (ss >> z)
	 //    {
	 //        arr[i][p++] = z;
	 //        if (ss.peek() == ',')
	 //            ss.ignore();
	 //    }
		// cin>>arr[i][0]>>arr[i][1];
	}
	for (int i = 0; i < k; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			for (int k = 0; k < n; ++k)
			{
				v[j][k][i]=(abs(arr[i][0]-j) + abs(arr[i][1]-k));
			}
		}
	}
	for (int j = 0; j < m; ++j)
	{
		for (int k = 0; k < n; ++k)
		{
			std::vector<int> a(100,0);
			for (int i = 0; i < v[j][k].size(); ++i)
			{
				a[v[j][k][i]]++;
			}
			for(int l=0;l<100;l++){
				if(a[l]>1){
					ans++;
					break;
				}
			}
		}
	}	
	cout<<ans;
	return 0;
}