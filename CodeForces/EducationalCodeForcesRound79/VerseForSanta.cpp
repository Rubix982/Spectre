#include "../stdc++.h"
using namespace std;

int main(void)
{

    int t, sum = 0;
    cin >> t;
    
    while ( t-- )
    {
        int n, s, idx = 0;
        cin >> n >> s;
        int a[n];

        for ( int i = 0; i < n ; ++i ) 
        {
            cin >> a[i];
            sum += a[i];
        }

        if ( sum <= s )
        {
            cout << idx << "\n";
            continue;
        }
        else 
        {
            int i = 0;
            while ( s - a[i] >= 0 and i < n )
            {
                s = s - a[i];
                ++i;
            } 

            int minn = 9999;
            for ( ; i < n ; ++i )
            {
                if ( a[i] < minn )
                {
                    minn = a[i];
                    idx = i;
                }
            }
        }

        cout << idx << "\n";
    }

    return 0;
}