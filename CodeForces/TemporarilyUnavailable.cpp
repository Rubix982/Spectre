#include "stdc++.h"
using namespace std;
typedef unsigned long long ull;

int main(void) {

    int t;
    cin >> t;

    while ( t-- ) {
        int a, b, c, r;

        cin >> a >> b >> c >> r;
    
        if ( 2 * r > abs(b - a) ) 
            std::cout << "0" << "\n";
        else if ( c > a || b < c ) {
            
            if ( c > a ) 
            {
                a = abs(c - 2 * r);
                std::cout << abs(b - a) - 2 * r << "\n";
            } 
            
            else if ( b < c ) 
            {
                a = abs(c + 2 * r);
                std::cout << abs(b - a) - 2 * r << "\n";
            }

        }
        else
            std::cout << abs(b - a) - 2 * r << "\n";
    }
    

    return 0;
}