//This is The Coding Area
#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n,i,max,sum=0,final,b,flag=0;
  cin>>n;
  int a[n];
  for(i=0;i<n;i++){
    cin>>a[i];
  }
  
  sort(a,a+n);
  for(i=0;i<n;i++)
  {
    sum+=a[i];
  
  }
  
  for(i=0;i<n-2;i++)
  {
    // final=sum-a[n-i-1];
    final=0;
    for(int j=0;j<n-i-1;j++)
    {
    	final+=a[j];
    }

    if(final>a[n-i-1])
    {
      b=n-i;
      flag=1;
      break;   
    }
   
  }
  
  if(flag==1)
    cout<<b;
  else 
    cout<<"0";
    
}