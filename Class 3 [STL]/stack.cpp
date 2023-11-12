#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> stk;

    stk.push(2);
    stk.push(10);
    stk.push(-1);

    while(!stk.empty()){
        cout << stk.top() << " ";
        stk.pop();
    }

    cout << stk.size() << '\n';

    return 0;
}
