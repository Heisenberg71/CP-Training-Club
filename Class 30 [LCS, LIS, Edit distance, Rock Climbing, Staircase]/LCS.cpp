#include <bits/stdc++.h>
#define ll long long
#define nl '\n'
using namespace std;

string s, t;
int dp[3003][3003], choiceMade[3003][3003];

int LCS(int i, int j)
{
    if(i == s.size() || j == t.size()) return 0;
    if(dp[i][j] != -1) return dp[i][j];

    int ans = 0;
    if(s[i] == t[j]){ /// choice 1
        choiceMade[i][j] = 1;
        ans = 1 + LCS(i + 1, j + 1);
    }
    else{
        int move_i = LCS(i + 1, j); /// choice 2
        int move_j = LCS(i, j + 1); /// choice 3

        if(move_i > move_j){ /// choice 2
            ans = move_i;
            choiceMade[i][j] = 2;
        }
        else{ /// choice 3
            ans = move_j;
            choiceMade[i][j] = 3;
        }
        //ans = max(move_i, move_j);
    }

    return dp[i][j] = ans;
}

string solutionPrint(int i, int j){
    string LCS_string;
    while(i < s.size() && j < t.size()){
       // cout << i << " i:j " << j << nl;
       // cout << "choices: " << choiceMade[i][j] << nl;
        if(choiceMade[i][j] == 1){
            LCS_string += s[i];
            i++, j++;
        }
        else if(choiceMade[i][j] == 2){
            i++;
        }
        else if(choiceMade[i][j] == 3){
            j++;
        }
        else return LCS_string;
    }
    return LCS_string;
}

int main()
{
    cin >> s >> t;
    memset(dp, -1, sizeof dp);
    int len = LCS(0, 0);

    string LCS_string = solutionPrint(0, 0);

    cout << LCS_string << nl;
}
