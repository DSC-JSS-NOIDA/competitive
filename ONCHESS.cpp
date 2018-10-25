#include<bits/stdc++.h>
#define ull unsigned long long int

using namespace std;

int main() 
{
    int t,j;
    cin>>t;
    while(t--){
        int n;
        int flag=0;
        string temp;
        cin>>n;
        int a[n][7];
        for(int i=0;i<n;i++){
            flag=0;
            cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
            cin>>temp;
            if(temp=="rated")
                a[i][4]=1;
            else
                a[i][4]=0;
            cin>>temp;
            if(temp=="random")
                a[i][5]=0;
            else if(temp=="white")
                a[i][5]=1;
            else
                a[i][5]=2;
            for(j=0;j<i;j++){
                if(a[i][0]<=a[j][2]&&a[i][0]>=a[j][1]&&a[j][0]<=a[i][2]&&a[j][0]>=a[i][1]&&a[i][3]==a[j][3]&&a[i][4]==a[j][4]&&((a[i][5]==0&&a[j][5]==0)||(a[i][5]==1&&a[j][5]==2)||(a[j][5]==1&&a[i][5]==2))){
                    cout<<j+1<<endl;
                    a[j][4]=10;
                    a[i][4]=10;
                    flag=1;
                    break;
                }
            }
            if(flag==0)
                cout<<"wait"<<endl;
        }
    }
    return 0;
}
