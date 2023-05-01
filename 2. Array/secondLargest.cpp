#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public:
    int secondLargest(vector<int> arr) {
        // res is second_largest element, largest refers to largest
        int res=-1,largest=0;
        // iterate from 1st index tillarr.size()-1
        for(int i=1;i<=arr.size()-1;i++) {
            // look for largest value as it is 0th index hence the next biggest number
            if(arr[i]>arr[largest]){
                // assign res to largest that is for first iteration it becomes 0 once the largest element is found
                res = largest;
                // update the largest value with i
                largest = i;
            } 
            // if the i-th iteration doesn't match with arr[largest], loop-in
            else if(arr[i] != arr[largest]) {
                // if res remains -1 or the i-th index is greater than res index, loop-in
                if(res == -1 || arr[i]>arr[res]) {
                    // update the res value, to the second largest element
                    res = i;
                }
            }
        }
        // return the index of second largest element
        return res;
    }
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    vector<int> arr = {2,13,5,9,12,6,18};
    Solution s;
    int mx = s.secondLargest(arr);
    s.display(mx);
    return 0;
}