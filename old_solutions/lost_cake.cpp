#include <bits/stdc++.h>
#define ull unsigned long long int
#define ll long long int

using namespace std;

int minEdgeBFS(vector <int> edges[], int u,
                              int v, int n)
{
    // visited[n] for keeping track of visited
    // node in BFS
    vector<bool> visited(n, 0);
 
    // Initialize distances as 0
    vector<int> distance(n, 0);
 
    // queue to do BFS.
    queue <int> Q;
    distance[u] = 0;
 
    Q.push(u);
    visited[u] = true;
    while (!Q.empty())
    {
        int x = Q.front();
        Q.pop();
 
        for (int i=0; i<edges[x].size(); i++)
        {
            if (visited[edges[x][i]])
                continue;
 
            // update distance for i
            distance[edges[x][i]] = distance[x] + 1;
            Q.push(edges[x][i]);
            visited[edges[x][i]] = 1;
        }
    }
    return distance[v];
}
 
// function for addition of edge
void addEdge(vector <int> edges[], int u, int v)
{
   edges[u].push_back(v);
   edges[v].push_back(u);
}
 
// Driver function
int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,e,s,d,x,y;
		cin>>n>>e>>s>>d;
	    // To store adjacency list of graph
	    vector <int> edges[n+1];
	    for(int i=0;i<e;i++){
	    	cin>>x>>y;
		    addEdge(edges, x, y);
	    }
	    cout << minEdgeBFS(edges, s, d, n+1);
	}
    return 0;
}
