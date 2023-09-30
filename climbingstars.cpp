#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int prev2=0;
    int prev=1;
    for(int i=2; i<=n; i++){
        int curr= prev2+ prev;
        prev2=prev;
        prev=curr;
    }
    cout<<prev;
    return 0;
}

/// space optimization method 
// with tc= O(n)
// sc= O(1)