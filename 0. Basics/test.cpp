#include<bits/stdc++.h>
#include<vector>
#include<algorithm>

using namespace std;

const int mod = 1e9 + 7;

int solve(int A[], int P[], int N) {
    int gcd_sum = 0;
    for (int i = 0; i < N; i++) {
        gcd_sum += __gcd(A[0], A[1]);
        for (int j = 2; j < N; j++) {
            if (A[j]) {
                A[0] = __gcd(A[0], A[j]);
            }
        }
        A[P[i] - 1] = 0;
    }
    return gcd_sum % mod;
}

int main() {
	cout<<"chal"<<endl;
    int A[] = {10,6,15}; // Input array A
    int P[] = {3,1,2}; // Input permutation P
    int N = 3;
    cout << solve(A, P, N) << endl;
    return 0;
}