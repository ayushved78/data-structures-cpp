/*
    Leaders in an array refers to a case where the element is greater than all the elements present at right
*/
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    // NAIVE APPROACH : TIME: O(n^2)
    void leaders_naive(vector<int> nums) {
        for(int i = 0;i<nums.size();i++) {
            bool flag = false;
            for(int j = i+1;j<nums.size();j++) {
                if(nums[i]<=nums[j]) {
                    flag = true;
                    break;
                }
            }if (flag == false)
                cout<<nums[i]<<" ";
        }
    }
    // EFFICIENT APPROACH : TIME: O(n)
    void leader_efficient(vector<int> nums) {
        int cur_lead = nums[nums.size()-1];
        cout<<cur_lead<<" ";
        for(int i=nums.size()-2;i>=0;i--) {
            if(cur_lead < nums[i]) {
                cur_lead = nums[i];
                cout<<cur_lead<<" ";
            }
        }
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {30,20,10};
    Solution s;
    s.leader_efficient(arr);
    return 0;
}       