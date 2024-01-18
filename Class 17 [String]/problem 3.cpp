#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    for(int L = 0, R = s.size() - 1; L < R; L++, R--){
        if(s[L] != s[R]) return false;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;

    int maxLen = 0;
    string maxLenPalindrome;
    for(int L = 0; L < s.size(); L++){
        string subString;
        for(int R = L; R < s.size(); R++){
            subString += s[R];
            if(isPalindrome(subString) && maxLen < subString.size()){
                maxLen = subString.size();
                maxLenPalindrome = subString;
            }
        }
    }

    cout << maxLenPalindrome << '\n';

    return 0;
}
