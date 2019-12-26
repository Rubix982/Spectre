#include "stdc++.h"
using namespace std;

#define foritem(n,arr) (for(int i = 0 ;))

int main(void) {

    int t;
    cin >> t;

    while ( t-- ) {

        int n, p, k, pref = 0, ans = 0;
        cin >> n >> p >> k;
        vector<int> v(n);

        for ( int i = 0; i < n ; ++i ) cin >> v[i];
        sort(v.begin(), v.end());

        for ( int i = 0 ; i <= k ; ++i ) {
            int sum = pref;
            if ( sum > p ) break;
            int cnt = i;

            for ( int j = i + k - 1 ; j < n ; j += k ) {
                if ( sum + v[j] <= p ) {
                    cnt += k;
                    sum += v[j];
                } else {
                    break;
                }
            }

            pref += v[i];
            ans = max(ans, cnt);
        }   
        std::cout << ans << "\n";
    }

    return 0;
}