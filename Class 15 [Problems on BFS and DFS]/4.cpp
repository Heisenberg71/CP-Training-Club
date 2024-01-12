#include <bits/stdc++.h>
#define nl '\n'
#define inf 1000000007
using namespace std;

int knightRow, knightCol;
int row, col;
int minKnightMoves[1003][1003];

int xx[] = {-2, -2, -1, -1, 2, 2, 1, 1};
int yy[] = {-1, 1, -2, 2, 1, -1, 2, -2};

bool isInside(pair<int, int> vCell){
    if(0 <= vCell.first && vCell.first < row && 0 <= vCell.second && vCell.second < col) return true;
    return false;
}

void BFS(){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            minKnightMoves[i][j] = inf;
        }
    }

    queue<pair<int, int>> Q;
    Q.push({knightRow, knightCol});
    minKnightMoves[knightRow][knightCol] = 0;

    cout << knightRow << " " << knightCol << '\n';

    while(!Q.empty()){
        pair<int, int> uCell = Q.front(); Q.pop();

        cout << uCell.first << " " << uCell.second << " " << minKnightMoves[uCell.first][uCell.second] << '\n';

        for(int i = 0; i < 8; i++){
            pair<int, int> vCell = {uCell.first + xx[i], uCell.second + yy[i]};
            if(isInside(vCell) && minKnightMoves[vCell.first][vCell.second] > 1 + minKnightMoves[uCell.first][uCell.second]){
                minKnightMoves[vCell.first][vCell.second] =
                    1 + minKnightMoves[uCell.first][uCell.second];
                Q.push(vCell);
            }
        }
    }
}

int main()
{
    cin >> row >> col;
    cin >> knightRow >> knightCol;

    BFS();

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout << "row: " << i;
            cout << " col: " << j << nl;
            cout << "mini move: " << minKnightMoves[i][j] << nl;
        }
    }

    return 0;
}
