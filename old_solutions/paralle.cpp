#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;
int factorial(int n)
{
    int fact=1;


    int i;
    for(i = 1; i<=n; i++)
        fact*=i;
    
    return fact;
}


int main() {
    int n;
    cin>>n;
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

    // sort(vect.begin(),vect.end());
    std::map<int, int> map;
    for (unsigned int i = 0; i < vect.size(); ++i)
    {
        if(!map[vect[i]])
            map[vect[i]]=1;
        else
            map[vect[i]]++;
    }
    std::vector<int> v;
    for (std::map<int,int>::iterator it=map.begin(); it!=map.end(); ++it){
        if(it->second!=1)
            v.push_back(factorial(it->second)/(2*factorial(it->second -2)));    
    }
    int ans = 0;
    for (unsigned int i = 0; i < v.size(); ++i)
    {
        int sum = 0;
        for (unsigned int j = i+1; j < v.size(); ++j)
        { 
            sum+=v[j];  
        }
        ans+=sum*v[i];
    }
    cout<<ans;
    return 0;
}