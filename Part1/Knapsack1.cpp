/**
 * @file Knapsack1.cpp
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * @copyright Copyright (c) 2022
 */

#include <bits/stdc++.h>

using namespace std;

int N, W;
int arr[105][105];
int dp[105][10005];

/*
Define: dp[i][j] = max value when ith items and take knapsack capacity W - j value.
Base case:
    dp[i][W] = 0 with i= 1 to N;


Recursion:
    if (j - wi) >= 0
        dp[i][j] = max(dp[i - 1][j + wi], dp[i][j - wi] + vi );
    else 
        dp[i][j] = dp[i - 1][j];
        if (i = N) return d[i][j]; // Target
*/

void solve(){
    cin >> N;
    for (int i = 1; i <= N; i++){

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
