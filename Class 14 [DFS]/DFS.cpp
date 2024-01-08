#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> edges[100005];
bool isVisited[100005];

void DFS(int u){
    isVisited[u] = true; /// u = 1
    for(int i = 0; i < edges[u].size(); i++){
        int v = edges[u][i]; /// v =
        if(isVisited[v] == false) DFS(v); /// DFS()
        /// <---- Here ---->
        /// u =
    }
///    ....
}

/**

edges[1] = {[2]}
edges[2] = {[5, 3, 4]}
edges[3] = {[2]}
edges[4] = {[2, 6]}
edges[5] = {[6, 2]}
edges[6] = {[5, 4]}

*/

int main()
{
    int n, e;
    cin >> n >> e;

    while(e--){
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    int source;
    cin >> source;
    DFS(source);

    return 0;
}
