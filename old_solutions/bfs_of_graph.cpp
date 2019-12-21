#include<bits/stdc++.h>
using namespace std;
bool vis[1001];
vector<int> g[1001];
void bfs(int s,vector<int> adj[],bool vis[]);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        memset(g,0,sizeof g);
        memset(vis,false,sizeof vis);
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].push_back(v);
        }
        bfs(1,g,vis);
        cout<<endl;
    }
}

void bfs(int s,vector<int> adj[],bool vis[])
{
    int cur;
    queue <int> q;
    q.push(s);
    while(!q.empty()){
        cur = q.front();
        if(!vis[cur])
            cout<<cur<<" ";
        vis[cur] = true;
        q.pop();
        for (int i = 0; i < adj[cur].size(); ++i)
        {
            if(!vis[adj[cur][i]])
                q.push(adj[cur][i]);
        }
    }
}