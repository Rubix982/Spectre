#include "stdc++.h"
using namespace std;

int main(void) 
{
    int n;
    bool flag = false;
    cin >> n;
    vector<int> a(n, 0);
    for ( int i = 0 ; i < n ; ++i ) 
    {
        cin >> a[i];
        if ( i != 0 and !flag )
            if ( a[i-1] > a[i] )
                flag = true;
    }

    if ( !flag ) for ( int i = 0; i < n ; ++i ) cout << "0 ";
    else 
    {
        for ( int i = 0 ; i < n ; ++i ) 
        {
            vector<int> b = a;
            int cntr = 0;
            for ( int j = 0 ; j <= n - ( i + 1 ) + 1 ; ++j )
            {
                if ( b[j] != j + 1 )
                {
                    cntr++, swap(b[j + 1], b[j]);
                }
            }
            cout << cntr << " ";
            cout << "\nValues are here: ";
            for ( const auto & value : b ) cout << value << " ";
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}