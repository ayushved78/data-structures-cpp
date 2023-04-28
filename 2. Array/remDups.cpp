#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    int remDups(vector<int> nums) {
        int res = 1;
        for(int i=1;i<nums.size();i++) {
            if(nums[i] != nums[res-1]) {
                nums[res] = nums[i];
                res++;
            }
        }
        return res;
    }
};

int main() {
    vector<int> arr = {10,10,20,20,30,30,30};
    Solution s;
    int r = s.remDups(arr);
    cout<<r;
    return 0;
}