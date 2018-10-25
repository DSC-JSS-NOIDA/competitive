//hint through-shashaa35
#include <iostream>
#include<cstdio>
using namespace std;
 
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n;
	    cin>>n;
	    int i,k,lar=0,a[10001]={0};
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&k);
	        a[k]++;
	        if(lar<k)
	        lar=k;
	    }
	    int l=0;
	    for(i=1;i<=lar;i++)
	    {
	        if(a[l]<a[i])
	        l=i;
	   }
	   printf("%d %d\n",l,a[l]);
	}
	   return 0;
}
 
