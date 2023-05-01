#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    // NAIVE APPROACH : TIME: O(n^2)
    int maxDifference_naive(vector<int> arr) {
        int res = arr[1]-arr[0];
        for(int i=0;i<arr.size();i++) {
            for(int j = i+1;j<arr.size();j++) {
                res = max(res,arr[j]-arr[i]);
            }
        }
        return res;
    }
    // EFFICEINT APPROACH : TIME: O(n)
    int maxDifference_efficient(vector<int> nums) {
        int res = nums[1]-nums[0];
        int minVal = nums[0];
        for(int i=0;i<nums.size();i++) {
            res = max(res,nums[i]-minVal);
            minVal = min(minVal,nums[i]);
        }
        return res;
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {2,13,5,9,12,6,18};
    Solution s;
    cout<<s.maxDifference_naive(arr)<<" "<<s.maxDifference_efficient(arr);
    return 0;
}