/*
https://codeforces.com/contest/908/problem/D
*/
#include "stdc++.h"
using namespace std;
typedef unsigned long long ull;

ull ObtainMulticplicativeInverse(ull a, ull b, ull s0 = 1, ull s1 = 0 ) {
    return b == 0 ? s0 : ObtainMulticplicativeInverse(b, a%b, s1, s0 - s1 * (ull)(a/b));
}

int main(void) {

    ull k, pa, pb;
    cin >> k >> pa >> pb;
    ull P = pa/(pa + pb), Q = pb/(pa + pb);

    while ( ( P * Q ) != (pa * pb)  ) P += pa, Q += pb;

    std::cout << ((P * ObtainMulticplicativeInverse(Q, (ull)10e9 + 7)) % (ull)(10e9 + 7)) << "\n";

    return 0;
}

#include <cstdio>
typedef long long ll;
const int p = 1e9 + 7;
ll inv(ll a)
{
    ll s = 1;
    for (int n = p - 2; n; n >>= 1)
    {
        if (n & 1)
            s = s * a % p;
        a = a * a % p;
    }
    return s;
}

int n, a, b, f[1001][1001];
int main()
{
    scanf("%d%d%d", &n, &a, &b);
    ll  u = a * inv(a + b) % p, 
        v = (1 - u + p) % p, 
        c = u * inv(v) % p;

    for (int i = n; i; --i)
        for (int j = n - 1; ~j; --j)
            f[i][j] = (j + i >= n ? j + i + c : u * f[i + 1][j] + v * f[i][j + i]) % p;
    printf("%d\n", f[1][0]);
}