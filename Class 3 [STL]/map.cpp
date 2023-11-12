#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, int> mp; /// map<key, value>
    map<int, int> :: iterator it;

    mp[1] = 5;
    mp[15] = 100;
    mp[200] = 40;
    mp[7] = 9;
    mp[-100] = 8;

    cout << mp[200] << '\n';

    for(auto x: mp){
        cout << x.first << " " << x.second << '\n';
    }
    cout << '\n';
    for(it = mp.begin(); it != mp.end(); it++)
        cout << it -> first << " " << it -> second << '\n';
    cout << '\n';

//    cout << mp.empty() << '\n';
//    cout << mp.size() << '\n';
    cout << "testing count: \n";
    cout << mp.count(200) << '\n';
    cout << mp.count(15) << '\n';
    cout << mp.count(2) << '\n';

    map<string, string> str_str;
    map<pair<int, int>, vector<string>> x;
    str_str["abcd"] = "efgh";
    cout << str_str["abcd"] << '\n';

    unordered_map<double, double> ump;
}
