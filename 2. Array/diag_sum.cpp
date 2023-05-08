#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        cout<<n<<endl;
        int sum = 0;
        for(int i = 0;i < n;i++)
            sum += mat[i][i]+mat[i][n-1-i];
        return n%2!=0 ? sum - mat[n/2][n/2] : sum;
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<vector<int>> mat = {{1,2,3},
              {4,5,6},
              {7,8,9}};
    Solution s;
    int ms = s.diagonalSum(mat);
    s.display(ms);
    return 0;
}