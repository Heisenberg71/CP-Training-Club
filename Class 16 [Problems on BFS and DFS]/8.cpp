#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
using namespace std;

bool discovery[LIM], finish[LIM];
vector<int> edges[LIM];

void DFS(int u){
    discovery[u] = true;

    for(int i = 0; i < edges[u].size(); i++){
        int v = edges[u][i];
        if(discovery[v] == false){
            cout << "Tree Edge: " << u << " -> " << v << "\n";
            DFS(v);
        }
        else if(discovery[v] == true && finish[v] == false){
            cout << "Back Edge: " << u << " -> " << v << "\n";
        }
        else if(discovery[v] == true && finish[v] == true){
            cout << "forword Edge: " << u << " -> " << v << "\n";
        }
    }

    finish[u] = true;
}

int main()
{
    int node, edge;
    cin >> node >> edge;
    while(edge--){
        int u, v;
        cin >> u >> v;
        edges[u].push_back(v);
    }
    int root;
    cin >> root;

    DFS(root);

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
