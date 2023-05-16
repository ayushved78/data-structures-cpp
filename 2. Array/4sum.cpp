#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
//         fix the first 2 values and then go for 2 pointer approach
        set<vector<int>> s;
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
//         TWO-POINTER APPROACH STARTS HERE
        for(int i=0;i<nums.size();i++) {
            int first=nums[i];
            for(int j=i+1;j<nums.size();j++) {
                int second=nums[j];
                int start=j+1,end=nums.size()-1;
                while(start<end) {
                    long long sum = (long long)first+(long long)second+(long long)nums[start]+(long long)nums[end];
                    if(sum==target) {
                        s.insert({first,second,nums[start],nums[end]});
                        start++;
                        end--;
                    } else if(sum<target)
                        start++;
                    else
                        end--;
                }
            }
        }
//         iterate in the set and push the val to ans
        for(auto val:s)
            ans.push_back(val);
        
        return ans;
    }
};

int main() {
    vector<int> v = {2,2,2,2};
    Solution s; 
    s.fourSum(v,8);
    return 0;
}