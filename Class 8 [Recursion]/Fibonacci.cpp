#include <bits/stdc++.h>
using namespace std;

/**

5 4 3 .......

*/

int fib(int N) /// N = 5
{
    cout << N << '\n';

    if(N == 1) return 0;
    if(N == 2) return 1;

    return fib(N - 1) + fib(N - 2);
}

int main()
{
    int N;
    cin >> N;
    cout << fib(N) << '\n';

    return 0;
}
