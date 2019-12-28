/*
https: //codeforces.com/problemset/problem/1170/A
*/
#include "stdc++.h"
using namespace std;

int main(void)
{

    int t ;
    cin >> t;

    while ( t-- ) 
    {
        int x, y;
        cin >> y >> x;
        cout << "1 " << x - 1 << " " << y - x + 1 << "\n";
    }

    return 0;
}