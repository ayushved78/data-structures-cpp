#include <bits/stdc++.h>
#include <algorithm>

// #define MOD 1000000007

using namespace std;

const int MAXN = 1000005;
const int MOD = 1e9 + 7;
int dp[MAXN], a[MAXN];
unordered_map<int, bool> used;

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// long long findSumOfGcd(int n, int a[], int p[]) {
//     long long sum = 0;
//     for (int i = 0; i < n; i++) {
//         int cur_gcd = a[i];
//         for (int j = 0; j < n; j++) {
//             cur_gcd = gcd(cur_gcd, a[j]);
//         }
//         sum = (sum + cur_gcd) % MOD;
//         a[p[i] - 1] = 0;
//     }
//     return sum;
// }


// long long solve(int n, int a[], int p[]) {
//     long long sum = 0;
//     bitset<100005> used;
//     for (int i = 0; i < n; i++) {
//         int current_gcd = 0;
//         for(int j = 0; j < n; j++) {
//             if(!used[j]) {
//                 current_gcd = gcd(current_gcd, a[j]);
//             }
//         }
//         sum = (sum + current_gcd) % MOD;
//         used[p[i]-1] = true;
//     }
//     return sum;
// }



long long solve(int n, int a[], int p[]) {
    dp[0] = a[0];
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum = (sum + dp[i]) % MOD;
        int next_gcd = a[p[i]-1];
        if(next_gcd == 0) {
            dp[i + 1] = dp[i];
        }
        else {
            dp[i + 1] = gcd(dp[i], next_gcd);
        }
    }
    return sum;
}

int main() {
    int A[] = {10,6,15}; // Input array A
    int P[] = {3,1,2}; // Input permutation P
    int N = 3;
    cout << solve(N,A,P) << endl;
    return 0;
}
