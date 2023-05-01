#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    void reverse(vector<int> arr, int low, int high) {
        while(low<high) {
            swap(arr[low],arr[high]);
            low++;high--;
        }
    }
    /*
        LEFT ROTATE BY ONE:
    */ 
    void leftRotateOne(vector<int> nums) {
        int tmp = nums[0];
        for(int i=1;i<nums.size();i++) {
            nums[i-1] = nums[i];
        }
        nums[nums.size()-1] = tmp;
        displayArray(nums);
    }
    /*
        LEFT ROTATE BY d
    */
    // NAIVE APPROACH : TIME: O(n+d) SPACE: O(1)
    void lr_naive(vector<int> nums, int d) {
        for(int i=0;i<d;i++) {
            leftRotateOne(nums);
        }
        displayArray(nums);
    }
    // BETTER APPROACH : TIME: O(n) SPACE: O(d)
    void lr_better(vector<int> nums, int d) {
        vector<int> tmp(d);
        for(int i=0;i<d;i++)
            nums[i] = tmp[i];
        for(int i=d;i<nums.size();i++)
            nums[i-d] = nums[i];
        for(int i=0;i<d;i++) 
            nums[nums.size()-d+i] = tmp[i];
        displayArray(nums);
    }
    // EFFICIENT APPROACH : TIME: O(n) SPACE: O(1)
    void leftRotateArray(vector<int> nums, int d) {
        reverse(nums,0,d-1);
        reverse(nums,d,nums.size()-1);
        reverse(nums,0,nums.size()-1);
        displayArray(nums);
    }

    void displayArray(vector<int> nums) {
        for(int x:nums) {
            cout<<x<<" ";
        }cout<<endl;
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {2,13,5,9,12,6,18};
    Solution s;
    // s.leftRotateOne(arr);
    s.displayArray(arr);
    return 0;
}