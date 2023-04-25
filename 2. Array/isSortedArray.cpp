#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    bool isSorted(vector<int> arr) {
        for(int i = 1;i<=arr.size()-1;i++) {
            if(arr[i]<arr[i-1]) {
                return 0;
            }
        }
        return 1;
    }
    void boolDisplay(int n) {
        if(n==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
};

int main() {
    vector<int> arr = {2,7,5,9,12,18};
    Solution s;
    int mx = s.isSorted(arr);
    s.boolDisplay(mx);
    return 0;
}