#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        long long int bits=1,nibbles=0,bytes=0,x=0,y=0,z=0;
        for(int i=1;i<n;i++){
            if(bits!=0)
                x++;
            if(nibbles!=0)
                y++;
            if(x==2){
                nibbles+=bits;
                x=0;bits=0;
            }   
            if(bytes!=0)
                z++;
            if(y==8){
                bytes+=nibbles;
                y=0;nibbles=0;
            }     
            if(z==16){
                bits=2*bytes;
                z=0;bytes=0;
            }
        }
        cout<<bits<<" "<<nibbles<<" "<<bytes<<endl;
    }
}
