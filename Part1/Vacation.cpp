/**
 * @file Vacation.cpp
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-12-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <bits/stdc++.h>
using namespace std;

/*
dp[i][j]: total point happiness in day i th and last activity is number jth (j = 1, 2, 3)
Base case:
    dp[1][1] = a1;
    dp[1][2] = b1;
    dp[1][3] = c1;
Recursion:
    dp[i][j] = max(dp[i - 1][{1,2,3} / j] + arr[i][j]);
Target:
    max(db[n][{1,2,3}])
*/

int N;
int dp[10005][4];
int arr[10005][4];
void solve()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    dp[1][1] = arr[1][1];
    dp[1][2] = arr[1][2];
    dp[1][3] = arr[1][3];
    int temp;
    for (int i = 2; i <= N; i++)
    {
        for (int j = 1; j <= 3; j++)
        {
            temp = dp[i - 1][j];
            for (int k = 1; k <= 3; k++)
            {
                if (k != j)
                {
                    temp = max(temp, dp[i - 1][k] + arr[i][j]);
                }
            }
            dp[i][j] = temp;
        }
    }
    int res = max(max(dp[N][1], dp[N][2]), dp[N][3]);
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
