#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

// Function to print all sub strings
void subString(std::vector<char> str, int n) 
{
	std::map<int, int> map;
	int flag = 1;
    // Pick starting point
	for (int len = 1; len <= n; len++) 
	{    
        // Pick ending point
		for (int i = 0; i <= n - len; i++) 
		{
            //  Print characters from current
            // starting point to current ending
            // point.  
			int j = i + len - 1;   
			int ans = 1;         
			for (int k = i; k <= j; k++){
				ans*=(int)(str[k]) - 48;
			} 
			// cout<<ans<<" ";
			if(map[ans])
				map[ans]++;
			else
				map[ans] = 1;
		}
	}

	for (std::map<int, int>::iterator it = map.begin();it!=map.end(); ++it)
	{
		if(it->second >1 ){
			flag = 0;
			break;

		}
	}
	cout<<flag<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
		ll n;
		cin>>n;
		std::vector<char> v;
		while(n!=0){
			v.push_back((char)(n%10 + 48));
			n/=10;
		}
		int len = v.size();
		subString(v, len);
	}
	return 0;
}