#include "../bits/stdc++.h"
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> ans, a(n, 0);

    for ( int i = 0 ; i < n ; ++i ) cin >> a[i];
    for ( int i = 0 ; i < ( 1 << n ) ; ++i )
    {
        vector<int> v;
        if ( ans.size() < a.size() / 2 )
        {
            for ( int j = 0 ; j < n ; ++j )
                if ( ( i & ( 1 << j)) > 0 )
                    v.push_back(a[j]);
        }
        else
            break;

        if ( is_sorted(v.begin(), v.end()) and v.size() > ans.size())
            ans = v;
    }

    for ( const auto & value : ans ) cout << value << " ";
    cout << "\n";

    return 0;
}