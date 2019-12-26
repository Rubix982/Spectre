#include "stdc++.h"
using namespace std;

int main(void) {

    int n, m;
    cin >> n >> m;
    int A[n], B[n];

    for ( int  i = 0; i < n ; ++i ) cin >> A[i];
    for ( int  i = 0; i < n ; ++i ) cin >> B[i];
    sort(B, B + n);

    int x = 0;
    while ( x < m ) {
        int C[n];

        for ( int i = 0; i < n ; ++i )
            C[i] = ((A[i] + x) % m);
        sort(C, C + n);

        bool flag = false;
        for ( int i = 0 ; i < n / 2 + 1 ; ++i ) {
            if (C[i] != B[i])
            {
                break;
            }
            else if ( i + 1 == n / 2 + 1 )
            {
                flag = true;
                break;
            }
        }

        if ( flag )
        {
            std::cout << x << "\n";
            break;
        }
        else
        {
            x++;
        }
    }

    return 0;
}