#include <bits/stdc++.h>
#define ll long long
#define LIM 100005
using namespace std;

int Time;
int discoveryTime[LIM], finishingTime[LIM];
vector<int> edges[LIM];

void DFS(int u){
    discoveryTime[u] = Time++; /// time = 1, DT[u] = 2

    for(int i = 0; i < edges[u].size(); i++){
        int v = edges[u][i];
        if(discoveryTime[v] == 0){
            DFS(v);
        }
    }

    finishingTime[u] = Time++;
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

    Time = 1;
    DFS(root);

    for(int i = 1; i <= node; i++){
        cout << i << " " << discoveryTime[i] << " " << finishingTime[i] << '\n';
    }

    int query;
    cin >> query;
    while(query--){
        int u, v;
        cin >> u >> v;
        if(discoveryTime[u] < discoveryTime[v] && finishingTime[u] > finishingTime[v]) cout << "YES\n";
        else cout << "NO\n";
    }

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
