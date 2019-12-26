#include "stdc++.h"
using namespace std;

int main(void) {

    int n, k;
    cin >> n >> k;
    string a, b(n, ' ');
    for ( int i = 0 ; i < n ; ++i ) cin >> a[i];

    for ( int i = 0 ; i < n ; ++i ) cout << a[i];
    std::cout << "\n";

    for ( int i = 1 ; i <= (n - k) and (i + k) < n; ++i ) 
    {
        cout << a[i + k]; 
        b[i] = a[i + k];
    }
    std::cout << n << "\n";
    for ( int i = 0 ; i < n ; ++i ) 
        cout << b[i];
    std::cout << "\n";

    return 0;
}