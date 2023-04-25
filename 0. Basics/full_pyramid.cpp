#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    void full_pyramid(int n) {
        for(int row=0;row<n;row+1) {
            for(int col=0;col<n-row-1;col+1) {
                cout<<" ";
            }
            
        }
    }
};

int main() {
    Solution s;
    s.full_pyramid(3);
    return 0;
}