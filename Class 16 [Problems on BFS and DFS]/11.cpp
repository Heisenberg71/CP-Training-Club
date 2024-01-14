#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
using namespace std;

int hasDiscovered[LIM], subTreeCount[LIM];
vector<int> edges[LIM];

void DFS(int u){
    hasDiscovered[u] = 1;

    subTreeCount[u] = 1;
    for(int i = 0; i < edges[u].size(); i++){
        int v = edges[u][i];
        if(hasDiscovered[v] != 1){
            DFS(v);
            subTreeCount[u] += subTreeCount[v];
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
    int root;
    cin >> root;

    DFS(root);

    for(int i = 1; i <= node; i++)
        cout << i << " " << subTreeCount[i] << "\n" ;

    return 0;
}

/**

12 11
1 2
1 3
1 4
2 5
3 6
3 7
7 11
7 12
4 8
4 9
4 10
1
10

*/

