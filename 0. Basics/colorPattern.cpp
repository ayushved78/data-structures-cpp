#include <iostream>
#include <algorithm>
#include <vector>

#define MOD 1000000007

using namespace std;

// int countWays(int n, vector<int>& a, int C) {
//     vector<int> color(C + 1);
//     for (int i = 0; i < n; i++) {
//         color[a[i]]++;
//     }
//     for (int i = 1; i <= C; i++) {
//         if (color[i] == 0) return 0;
//     }
//     int dp[n + 1];
//     for (int i = 0; i <= n; i++) {
//         dp[i] = 0;
//     }
//     dp[0] = 1;
//     int cnt = 0;
//     for (int i = 0; i < n; i++) {
//         if (color[a[i]] > 1) {
//             cnt++;
//         } else {
//             for (int j = cnt; j >= 1; j--) {
//                 dp[j] = (dp[j] + dp[j - 1]) % MOD;
//             }
//             cnt = 0;
//         }
//     }
//     for (int j = cnt; j >= 1; j--) {
//         dp[j] = (dp[j] + dp[j - 1]) % MOD;
//     }
//     int result = 0;
//     for (int i = 1; i <= n; i++) {
//         result = (result + dp[i]) % MOD;
//     }
//     return result;
// }

int countWays(int n, vector<int>& a, int C) {
    int result = 0;
    vector<int> color(C+1);
    for(int i = 0; i < n; i++) color[a[i]]++;
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(color[a[i]] > 0) {
            color[a[i]]--;
            cnt++;
        }
        if(cnt == C) {
            result++;
            cnt = 0;
            for(int j = 1; j <= C; j++) color[j] = 1;
        }
    }
    return result;
}

int main() {
    int n = 9;
    int C = 3;
    vector<int> a = {1,2,3,1,2,3,1,2,3};
    cout << countWays(n, a, C) << endl;
    return 0;
}
