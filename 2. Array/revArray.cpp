#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    void revArray(vector<int> arr) {
        int start = 0, end = arr.size()-1;
        while (start<end)
        {
            swap(arr[start],arr[end]);
            start++;end--;
        }
        for(int i=0;i<=arr.size()-1;i++) {
            cout<<arr[i]<<" ";
        }
    }
};

int main() {
    vector<int> arr = {2,7,5,9,12,6,18};
    Solution s;
    s.revArray(arr);
    return 0;
}