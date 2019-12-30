#include "stdc++.h"
using namespace std;

#define SIZE 100

int r, c;

void traverse(int dp[SIZE][SIZE], int i, int j )
{
    if ( i < r and j < c )
    {
        dp[i][j] = dp[i][j] + dp[i - 1][j];
        traverse(dp, i + 1, j);
        dp[i][j] = dp[i][j] + dp[i][j - 1];
    }
}

int main(void)
{
    cin >> r >> c;

    int board[r][c];

    for ( int i = 0 ; i < r ; ++i )
        for ( int j = 0 ; j < c ; ++ j )
            cin >> board[i][j];

    int dp[SIZE][SIZE]{0};

    traverse(dp, 1, 1);

    cout << dp[r - 1][c - 1] << "\n";

    return 0;
}