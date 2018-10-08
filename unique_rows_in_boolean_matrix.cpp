#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
void printMat(int M[MAX][MAX],int row,int col);
int main()
{
int T;
cin>>T;
while(T--)
{
	int n,m;
	cin>>n>>m;
	int a[MAX][MAX];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	printMat(a,n,m);
	cout<<endl;
}
}

void printMat(int M[MAX][MAX],int row,int col)
{
	std::map<int, pair<int,int> > map;
	int n;
	for (int i = 0; i < row; ++i)
	{
		n = 0;
		for( int j =0; j<col;j++){
			n+= M[i][j]*pow(10,j);
		}	
		if(map[n].first)
			map[n].first++;
		else{
			map[n].first = 1;
			map[n].second = i;
		}
	}
	for(std::map<int, pair<int,int> >::iterator it=map.begin();it!=map.end();it++){
		// if((it->second).first >1){
			int tmp = it->second.second;
			for (int i = 0; i < col; ++i)
			{
				cout<<M[tmp][i]<<" ";
			}
			cout<<"$";
		// }
	}
}