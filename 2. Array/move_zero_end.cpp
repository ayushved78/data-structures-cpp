#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    void moveZeros(vector<int> nums) {
        int count = 0;
        for(int i=0;i<nums.size();i++) {
            if(nums[i]!=0) {
                swap(nums[i],nums[count]);
                count++;
            }
        }
        displayArray(nums);
    }
    void displayArray(vector<int> nums) {
        for(int x:nums) {
            cout<<x<<" ";
        }
    }
};

int main() {
    vector<int> arr = {10,5,0,0,8,0,2};
    Solution s;
    s.moveZeros(arr);
    return 0;
}