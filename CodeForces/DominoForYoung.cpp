#include "stdc++.h"
using namespace std;

int main(void) {
    int n, sum = 0;
    cin >> n;
    int a[n];
    for ( int i = 0 ; i < n ; ++i ) { 
        cin >> a[i];
        if ( a[i] % 2 == 1) a[i]--;
        a[i] /= 2;
        sum = sum + a[i];
    }
    return 0;
}