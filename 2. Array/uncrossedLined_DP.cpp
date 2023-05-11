#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int solve(vector<int> nums1,vector<int> nums2, int i, int j, int n1, int n2, vector<vector<int>> dp) {
        if(i>n1 || j>n2)
            return 0;
        if(dp[i][j] != -1)
            return dp[i][j];
        if(nums1[i]==nums2[j]) {
            dp[i][j] = 1 + solve(nums1,nums2,i+1,j+1,nums1.size(),nums2.size(),dp);
            return dp[i][j];
        } else {
            dp[i][j] = max(solve(nums1,nums2,i+1,j,nums1.size(),nums2.size(),dp),solve(nums1,nums2,i,j+1,nums1.size(),nums2.size(),dp));
            return dp[i][j];
        }
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n1= nums1.size(), n2 = nums2.size();
        vector<vector<int>> dp(n1, vector<int> (n2,-1));
        return solve(nums1,nums2,0,0,n1-1,n2-1,dp);
    }
};

int main() {
    vector<int> n1 = {1,4,2};
    vector<int> n2 = {1,2,4};
    Solution s;
    int fs = s.maxUncrossedLines(n1,n2);
    cout<<fs<<endl;
    return 0;
}