#include <bits/stdc++.h>
using namespace std;

char grid[25][25];
int visited[25][25];

int rr[] = {0, 1, -1, 0};
int cc[] = {1, 0, 0, -1};

int H, W;
bool isInside(int row, int col){
    if(row < 0 || row >= H || col < 0 || col >= W) return false;
    return true;
}

int BFS(int sourceRow, int sourceCol){
    memset(visited, 0, sizeof visited);

    queue<vector<int>> Q;


    Q.push({sourceRow, sourceCol});
    visited[sourceRow][sourceCol] = 1;

    int cellCount = 0;
    while(!Q.empty()){
        vector<int> u = Q.front(); Q.pop();
        cellCount++;

        for(int i = 0; i < 4; i++){
            vector<int> v = {u[0] + rr[i], u[1] + cc[i]};
         ///vector<int> v = {r, c + 1}; i = 0
         ///vector<int> v = {r + 1, c}; i = 1
         ///vector<int> v = {r - 1, c}; i = 2
         ///vector<int> v = {r, c - 1}; i = 3

            if(isInside(v[0], v[1]) &&
               grid[ v[0] ][ v[1] ] != '#' &&
               visited[ v[0] ][ v[1] ] == false){

                Q.push(v);
                visited[ v[0] ][ v[1] ] = 1;

            }
        }
    }

    return cellCount;
}

int main()
{
    int t, cas = 1;
    cin >> t;
    while(t--){
        cin >> W >> H;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                cin >> grid[i][j];
            }
        }

        int sourceRow, sourceCol;
        for(int i = 0; i < H; i++){
            for(int j = 0; j < W; j++){
                if(grid[i][j] == '@'){
                    sourceRow = i;
                    sourceCol = j;
                }
            }
        }

        int cellCount =  BFS(sourceRow, sourceCol);

        cout << "Case " << cas++ << ": " << cellCount << '\n';
    }

    return 0;
}
