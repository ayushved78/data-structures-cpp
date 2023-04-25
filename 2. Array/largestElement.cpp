#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    int largestElement(vector<int> arr) {
        int max_e = 0;
        for(int i=1;i<=arr.size()-1;i++) {
            if(arr[i]>=arr[max_e]){
                max_e = i;
            }
        }
        return max_e;
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {2,7,5,9,12,6,18};
    Solution s;
    int mx = s.largestElement(arr);
    s.display(mx);
    return 0;
}