#include "../bits/stdc++.h"
using namespace std;
typedef unsigned long long ull;

// Length of the shortest common supersequence

ull SCS_Length(string str1, string str2, ull n, ull m)
{
    if (n == 0 || m == 0)
        return n + m;
    if (str1[n - 1] == str2[m - 1])
        return 1 + SCS_Length(str1, str2, n - 1, m - 1);
    return min(SCS_Length(str1, str2, n - 1, m) + 1, SCS_Length(str1, str2, n, m - 1) + 1);
}

int main(void)
{
    string str1 = "", str2 = "";
    cin >> str1 >> str2;

    cout << SCS_Length(str1, str2, str1.length(), str2.length()) << "\n";
}