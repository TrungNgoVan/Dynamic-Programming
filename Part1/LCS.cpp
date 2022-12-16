/**
 * @file LCS.cpp
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

const int MAX_N = 1001;

int dp[MAX_N][MAX_N];

// dp[i][j] => LCS of two string X (length = i) and Y (length = j);
// Base case:   
    // dp[0][j] = 0;
    // dp[i][0] = 0;
// Target : dp[n][m] with n = length string X, m = length string Y
// f[i][j] = ?  
    // Case 1: s[i] = s[j]
        // f[i][j] = f[i - 1][j - 1] + 1;
    // Case 2: s[i] != s[j]
        // f[i][j] = max(f[i][j - 1], f[i - 1][j]);
string X, Y;
int n ,m;

void solve(){
    cin >> X;
    cin >> Y;
    n = X.length();
    m = Y.length();
    
    for (int i = 0; i <= n; i++){
        dp[i][0] = 0;
    }
    for (int j = 0; j <= m; j++){
        dp[0][j] = 0;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (X[i] == Y[j]){
                dp[i + 1][j + 1] = max(dp[i][j] + 1, dp[i + 1][j + 1]); 
            }
            else {
                dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
            }
        }
    }
    cout << dp[n][m];
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
