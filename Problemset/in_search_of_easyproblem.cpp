#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int i,n;cin>>n;
    while(n>0) {
        cin>>i;
        if(i==1) {
            cout<<"HARD"<<endl;
            return 0;
        }
        n--;
    }
    cout<<"EASY"<<endl;
    return 0;
}