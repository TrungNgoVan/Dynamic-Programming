/**
 * @file Frog1.cpp
 * @author Ngo Van Trung (trung2601.it@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2022-12-12
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <math.h>

using namespace std;

const int MAX_N = 100001;
int arr[MAX_N];
int dp[MAX_N];
int n;

void solve(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    dp[1] = 0;
    dp[2] = abs(arr[2] - arr[1]);
    for (int i = 3; i <= n; i++){
        dp[i] = min(dp[i - 2] + abs(arr[i] - arr[i - 2]), dp[i - 1] + abs(arr[i] - arr[i - 1]));
    }
    cout << dp[n];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
