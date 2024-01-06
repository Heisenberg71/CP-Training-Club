#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool hasDiscovered[10004];
vector<int> edges[10004];

void BFS(int source)
{
    queue<int> Q;
    Q.push(source);
    hasDiscovered[source] = true;

    while(!Q.empty()){
        int u = Q.front(); Q.pop();

        cout << "Node: " << u;
        getchar();

        for(int i = 0; i < edges[u].size(); i++){
            int v = edges[u][i];
            if(hasDiscovered[v] == false){
                Q.push(v);
                hasDiscovered[v] = true;
            }
        }

    }

}

int main()
{
    int node, edge;
    cin >> node >> edge;

    while(edge--){
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    int source;
    cin >> source;
    getchar();
    BFS(source);

    return 0;
}


/*

11 11
1 2
1 3
2 8
2 4
3 5
3 7
4 5
9 6
4 6
5 6
10 7
1

*/
