#include "../bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;

ull LCS_Length(string str1, string str2, ull n, ull m)
{
    if ( n == 0 || m == 0 ) return 0;
    if ( str1[n - 1] == str2[m - 1] ) return 1 + LCS_Length(str1, str2, n - 1, m - 1);
    return max(LCS_Length(str1, str2, n - 1, m), LCS_Length(str1, str2, n, m - 1));
}


int main(void)
{
    string str1 = "", str2 = "";
    cin >> str1 >> str2;

    cout << LCS_Length(str1, str2, str1.length(), str2.length()) << "\n";
}