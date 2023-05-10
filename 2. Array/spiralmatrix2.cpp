#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> ans(n,vector<int> (n,0));
        int top = 0, bottom = n-1;
        int left = 0, right = n-1;
        int val = 1;
        while(top<=bottom && left<=right) {
            for(int i=left;i<=right;i++)
                ans[top][i] = val++;
            top++;
            for(int i=top;i<=bottom;i++)
                ans[i][right]=val++;
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--)
                    ans[bottom][i]=val++;
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--)
                    ans[i][left]=val++;
                left++;
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                cout<<ans[i][j]<<" ";
            }cout<<endl;
        }
        return ans;
    }
};

int main() {
    
    Solution s;
    s.generateMatrix(7);
    return 0;
}