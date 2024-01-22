#include <bits/stdc++.h>
#define ll long long
#define BASE 31
#define LIM 1000006
#define MOD 1000000007
#define nl '\n'
using namespace std;

int prefixHash[LIM], power[LIM];

void makePrefixHash(string& mainString){
    prefixHash[0] = mainString[0] - 'a' + 1;
    power[0] = 1;
    //cout << 0 << " " << prefixHash[0] << nl;
    for(int i = 1; i < mainString.size(); i++){
        prefixHash[i] = BASE*prefixHash[i - 1] + (mainString[i] - 'a' + 1);
        power[i] = power[i - 1]*BASE;
        //cout << i << " " << prefixHash[i] << nl;
    }
}

int getHash(int L, int R){
    int rangeLen = R - L + 1;
    if(L == 0) prefixHash[rangeLen - 1];
    return prefixHash[R] - prefixHash[L - 1]*power[R - L + 1];
}

int main()
{
    string mainString, subString;
    cin >> mainString >> subString;

    makePrefixHash(mainString);

    int subStringHash = subString[0] - 'a' + 1;
    for(int i = 1; i < subString.size(); i++){
        subStringHash = BASE*subStringHash + (subString[i] - 'a' + 1);
    }

    //cout << "subString: " << subString << nl;

    bool isMatched = false;
    for(int L = 0, R = subString.size() - 1; R < mainString.size(); L++, R++){
        //cout << getHash(L, R) << nl;
        if(getHash(L, R) == subStringHash){
            isMatched = true;
            break;
        }
    }

    if(isMatched) cout << "YES\n";
    else cout << "NO\n";

    return 0;
}

/**
1232465567
246
*/
