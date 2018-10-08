#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n1,n2;
		cin>>n1>>n2;
	    int max = (n1 > n2) ? n1 : n2;

	    do
	    {
	        if (max % n1 == 0 && max % n2 == 0)
	        {
	            cout  << max;
	            break;
	        }
	        else
	            ++max;
	    } while (true);
	    while(n1 != n2)
	    {
	        if(n1 > n2)
	            n1 -= n2;
	        else
	            n2 -= n1;
	    }
	    cout<<" "<<n1<<endl;	
	}
	return 0;
}