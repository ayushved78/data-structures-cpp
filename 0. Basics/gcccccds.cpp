#include <iostream>
#include <vector>
using namespace std;
#define MOD 1000000007

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

int solve(int N, vector<int>& A, vector<int>& P) {
    int result = 0, current_gcd = A[P[0]-1];
    A[P[0]-1] = 0;
    for (int i = 1; i < N; i++) {
        result = (result + current_gcd) % MOD;
        int next_gcd = A[P[i]-1];
        A[P[i]-1] = 0;
        current_gcd = gcd(current_gcd, next_gcd);
    }
    return result;
}

int sumGcd(int N, vector<int>& A, vector<int>& P) {
    int result = 0, current_gcd = A[P[0]-1];
    vector<bool> used(N);
    used[P[0]-1] = true;
    for (int i = 1; i < N; i++) {
        result = (result + current_gcd) % MOD;
        used[P[i]-1] = true;
        current_gcd = 0;
        for(int j = 0; j < N; j++) {
            if(!used[j]) {
                current_gcd = gcd(current_gcd, A[j]);
            }
        }
    }
    return result;
}

int main() {
    vector<int> A = {10,6,15}; // Input array A
    vector<int> P = {3,1,2}; // Input permutation P
    int N = 3;
    cout << sumGcd(N, A, P) << endl;
    return 0;
}

// int main() {
//     int A[] = {5}; // Input array A
//     int P[] = {1}; // Input permutation P
//     int N = 1;
//     cout << findSumOfGcd(N,A,P) << endl;
//     return 0;
// }

/*

int result = 0, current_gcd = A[P[0]-1];
    A[P[0]-1] = 0;
    for (int i = 0; i < N; i++) {
        result = (result + current_gcd) % MOD;
        int next_gcd = A[P[i]-1];
        A[P[i]-1] = 0;
        current_gcd = gcd(current_gcd, next_gcd);
    }
    return result;

*/