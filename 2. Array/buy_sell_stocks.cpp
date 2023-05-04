/*
    Max Profit after buying selling stocks
    in a case the stock has only 1 element then no profit can be generate hence 0
    for a case take the input as 1,5,3,8,12: the max profit can be generated is 13
    - buy at 1 and sell at 5
    - buy at 3 and sell at 12
*/
#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    // NAIVE APPROACH
    int maxProfitNaive(vector<int> arr, int start, int end) {
        if(end<=start)
            return 0;
        int profit = 0;
        for(int i=start;i<end;i++) {
            for(int j=i+1;j<end;j++) {
                if(arr[i]<arr[i-1]) {
                    int cur_profit = (arr[j]-arr[i]) + maxProfitNaive(arr,start,i-1) + maxProfitNaive(arr,j+1,end);
                    profit = max(cur_profit,profit);
                }
            }
        }
        return profit;
    }

    // EFFICIENT APPROACH
    int maxProfitEfficient(vector<int> arr) {
        int n = arr.size();
        int profit = 0;
        for(int i=1;i<n;i++) {
            if(arr[i]>arr[i-1]) {
                profit+=arr[i]-arr[i-1];
            }
        }
        return profit;
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {1,5,3,8,12};
    Solution s;
    int mpn = s.maxProfitNaive(arr,0,arr.size());
    s.display(mpn);
    int mpe = s.maxProfitEfficient(arr);
    s.display(mpe);
    return 0;
}