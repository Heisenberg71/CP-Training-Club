#include <bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;

    for(int i = 0; i < 15; i++){
        s.insert(i);
    }

    for(auto x: s)
        cout << x <<  ' ';
    cout << '\n';
    cout << "set size: " << s.size() << '\n';

    cout << "finding" << '\n';
    if(s.find(10) != s.end()) cout << "found!" << '\n';
    s.erase(10);

    for(auto x: s)
        cout << x << ' ';
    cout << '\n';

    s.lower_bound();
    s.upper_bound();

    return 0;
}
