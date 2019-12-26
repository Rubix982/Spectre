#include "stdc++.h"
using namespace std;

int main(void) {

    int t;
    cin >> t;

    while ( t-- ) {
        int n, p, k;

        cin >> n >> p >> k;
        list<int> list;
        
        for ( int i = 0; i < n ; ++i ) { 
            int temp;
            std::cin >> temp;
            list.push_back(temp);
        }

        int counter = 0;
        while ( !list.empty() ) {
            auto maxx = std::max_element(list.begin(), list.end()), minn = std::min_element(list.begin(), list.end());

            p = p - *minn;
            if ( p < 0 ) break;
            ++counter;
            
            list.remove(*minn);
            list.remove(*maxx);
        }

        if ( counter == 0 )
            std::cout << 0 << "\n";
        else 
            std::cout << counter + 1 << "\n";
    }

    return 0;
}