#include <bits/stdc++.h>
using namespace std;
int main()
{
//    vector<string> str;
//    str.push_back("abcd");
//    str.push_back("efgh");
//    str.push_back("xyz");
//
//    for(int i = 0; i < str.size(); i++)
//        cout << str[i] << '\n';

//    vector<int> v;
//    for(int i = 0; i < 10; i++)
//        v.push_back(i);
//    for(int i = 0; i < v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';
//
////    cout << *(--v.end()) << '\n';
////    cout << *v.begin() << '\n';
//
//    cout << "empty check: " << v.empty() << '\n'; /// v.empty() == 0, if not empty
//                                                  /// v.empty() == 1, if empty
//    v.clear();
//
//    for(int i = 0; i < v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';

//    cout << v.back() << '\n'; /// 9
//    v.pop_back(); /// pop-out 9
//    for(int i = 0; i < v.size(); i++)
//        cout << v[i] << " ";
//    cout << '\n';
//
//    cout << v[0] << " " << *v.begin() << '\n';

//    int a;
//    cout << a << '\n';

    vector<pair<int, int>> v;
    for(int i = 0; i < 3; i++){
        v.push_back({2, 4});
    }
    for(int i = 0; i < 3; i++){
        cout << v[i].first << " " << v[i].second << '\n';
    }
    for(auto x: v){ /// for-each loop
        cout << x.first << " with auto " << x.second << '\n';
    }


    return 0;
}
