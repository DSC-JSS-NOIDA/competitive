#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

bool isSquareFree(int n)
{
    if (n % 2 == 0)
       n = n/2;
  
    // If 2 again divides n, then n is 
    // not a square free number.
    if (n % 2 == 0)
       return false;
 
    // n must be odd at this point.  So we can  
    // skip one element (Note i = i +2)
   	int limit = 19;
   	if(sqrt(n)<19)
   		limit = sqrt(n);
    for (int i = 3; i <= limit; i = i+2)
    {
        // Check if i is a prime factor
        if (n % i == 0)
        {
           n = n/i;
 
           // If i again divides, then 
           // n is not square free
           if (n % i == 0)
               return false;
        }
    }
 
    return true;
}

int main() {
	ll n,ans=0;
	cin>>n;

	std::vector<int> v;
    // Note that this loop runs till square root
    for (int i=2; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            // If divisors are equal, print only one
            if (n/i == i)
            	v.push_back(i);
 
            else{ // Otherwise print both
            	v.push_back(i);
            	v.push_back(n/i);
            }
        }
    }	
    int length = v.size();
	for (int i = 0; i < length ; ++i)
	{
		if(isSquareFree(v[i]))
			ans++;
	}
	cout<<ans;
	return 0;
}