#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> adjacencyList[100005];

int main()
{
    int N, E;
    cin >> N; /// [1 --- N]
    cin >> E;
    for(int i = 0; i < E; i++){
        int u, v;
        cin >> u >> v;
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    for(int u = 1; u <= N; u++){
        cout << u << ":\n";
        for(int i = 0; i < adjacencyList[u].size(); i++){
            cout << adjacencyList[u][i] << " ";
        }
        cout << '\n';
    }

    cout << '\n';
}

/**

6 7
1 2
1 3
5 1
4 1
1 6
4 5
6 3


*/
