#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    void arrayFrequencies(vector<int> arr) {
        int n = arr.size();
        int freq=1,i=1;
        while(i<n) {
            while(i<n && arr[i]==arr[i-1]) {
                freq++;i++;
            }
            cout<<arr[i-1]<<" "<<freq<<endl;
            i++;
            freq=1;
        }
        // for only 1 element case
        if(n==1 || arr[n-1]!=arr[n-2]) {
            cout<<arr[n-1]<<" "<<1<<endl;
        }
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {10,10,10,20,20,30};
    Solution s;
    s.arrayFrequencies(arr);
    return 0;
}