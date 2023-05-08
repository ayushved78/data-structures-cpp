#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
    public: 
    int getRainWater(vector<int> arr) {
        int n = arr.size(), res = 0;
        for(int i = 1;i<n-1;i++) {
            int lmax = arr[i], rmax = arr[i];
            // find max on Let
            for(int j=0;j<i;j++)
                lmax = max(lmax, arr[j]);
            // find max on Right
            for(int j = i+1;j<n;j++)
                rmax = max(rmax,arr[j]);
            // get the result
            res = res + (min(lmax,rmax)-arr[i]);
        }
    }
    int getRainWterEfficient(vector<int> arr) {
        int n = arr.size();
        vector<int> lmax(n);
        vector<int> rmax(n);
        lmax[0] = arr[0];rmax[n-1]=arr[n-1];
        // compute lmax
        for(int i=1;i<n;i++)
            lmax[i]=max(arr[i],lmax[i-1]);
        // compute right
        for(int i = n-2;i>=0;i--)
            rmax[i] = max(arr[i],rmax[i+1]);
        // final res
        int res = 0;
        for(int i=1;i<n-1;i++)
            res+=min(lmax[i],rmax[i])-arr[i];
        
        return res;
    }
    
    void display(int n) {
        cout<<n<<endl;
    }
};

int main() {
    // vector<int> arr = {4,2,0,3,2,5};
    vector<int> arr = {1,1};
    Solution s;
    int rwn = s.getRainWterEfficient(arr);
    s.display(rwn);
    return 0;
}           