#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    int maxConnsecutiveOne(vector<int> nums) {
        int n = nums.size();
        int count = 0;
        int consCount = 0;
        for(int i=0;i<n;i++) {
            if(nums[i]==0)
                count=0;
            else
                count++;
                consCount = max(count,consCount);
            // if((nums[i]=nums[i+1])==1) {
            //     count++;
            // }
            // consCount = max(count,consCount);
        }
        return consCount;
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {0,1,1,1,0,1,1,0};
    Solution s;
    int gs = s.maxConnsecutiveOne(arr);
    s.display(gs);
    return 0;
}