#include "stdc++.h"
using namespace std;
typedef unsigned long long ull;

ull C(ull n, ull k)
{
    if ( k == 0 || k == n ) return 1;
    else return C( n - 1, k - 1 ) + C( n - 1, k );
}

int main(void) 
{
    int n;
    size_t setSize = 0, sum = 0;
    cin >> n;
    int a[n];

    for ( int i = 0 ; i < n ; ++i ) cin >> a[i];
    
    for ( int i = 0; i < n ; ++i )
    {
        set<int> set;
        for ( int j = 1 ; j <= a[i] ; ++j )
        {   
            if ( a[i] % j == 0 ) 
            {
                if ( set.find(j) == set.end() )
                {
                    set.insert(j);
                    setSize = set.size();
                    sum++;
                    std::cout << sum << " " << setSize << " " << j << "\n";
                }
            }
        }
    }

    std::cout << "\nValues: " << C(setSize + n - 1, n - 1) << "\n";

    return 0;
}