#include "../stdc++.h"
using namespace std;
typedef unsigned long long ull;

ull C(ull k , ull  n)
{
    if ( k == 0 || k == n )
        return 1;
    else 
        return C(k - 1, n - 1) + C(k - 1, n);
}


int main(void)
{

    int  t;
    cin >> t;

    while ( t-- ) 
    {
        int r, g, b;
        cin >> r >> g >> b;

        bool    flag1 = (C(r, 2) % 2) == 0, 
                flag2 = (C(g, 2) % 2) == 0, 
                flag3 = (C(b, 2) % 2) == 0;

        if ( r == 1 || r == 2 ) flag1 = true;
        if ( g == 1 || g == 2 ) flag2 = true;
        if ( b == 1 || b == 2 ) flag3 = true;

        if ( flag1 & flag2 & flag3 ) std::cout << "Yes\n";
        else std::cout << "No\n";
    }

    return 0;
}