#include <iostream>
#include <queue>
using namespace std;
int main()
{
    string s;
    cin >> s;

    queue <int> q;

    int maxPalindromeLen = 0;
    for(int middle = 0; middle < s.size(); middle++){
        int palindromeLengthForOddLen = 0;
        for(int L = middle, R = middle; L >= 0 && R < s.size(); L--, R++){
            if(s[L] == s[R]){
                palindromeLengthForOddLen += 2;
                if(L == R) palindromeLengthForOddLen--;
            }
            else break;
        }

        int palindromeLengthForEvenLen = 0;
        for(int L = middle, R = middle + 1; L >= 0 && R < s.size(); L--, R++){
            if(s[L] == s[R]){
                palindromeLengthForEvenLen += 2;
            }
            else break;
        }

        maxPalindromeLen = max(maxPalindromeLen, max(palindromeLengthForOddLen, palindromeLengthForEvenLen));
    }

    cout << maxPalindromeLen << '\n';

    return 0;
}

