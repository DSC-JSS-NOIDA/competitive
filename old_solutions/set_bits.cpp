#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

unsigned int countSetBits(unsigned int n)
{
  unsigned int count = 0;
  while (n)
  {
    count += n & 1;
    n >>= 1;
  }
  return count;
}
int main() {
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<countSetBits(n)<<endl;
	}
	return 0;
}