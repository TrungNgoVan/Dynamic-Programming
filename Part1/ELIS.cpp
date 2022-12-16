/**
 * @file ELIS.cpp
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief
 * @version 0.1
 * @date 2022-12-11
 * @link https://www.spoj.com/problems/ELIS/ @endlink
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
using namespace std;

const int MAX_N = 11;
int arr[MAX_N];
int dp[MAX_N];
int n;

void solve()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        dp[i] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1); // DP
            }
        }
    }
    int res = dp[0];
    for (int i = 1; i < n; i++)
    {
        res = max(res, dp[i]);
    }
    cout << res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
